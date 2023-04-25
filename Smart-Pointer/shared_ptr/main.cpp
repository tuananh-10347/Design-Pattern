#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
    explicit MyClass(int x) : value(x)
    {
        std::cout << "MyClass constructor called." << std::endl;
    }

    ~MyClass()
    {
        std::cout << "MyClass destructor called." << std::endl;
    }

    void printValue()
    {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main()
{
    std::shared_ptr<MyClass> p1(new MyClass(42));
    std::cout << "p1 reference count: " << p1.use_count() << std::endl;

    {
        std::shared_ptr<MyClass> p2 = p1;
        std::cout << "p1 reference count: " << p1.use_count() << std::endl;
        std::cout << "p2 reference count: " << p2.use_count() << std::endl;

        p2->printValue();
    }

    std::cout << "p1 reference count: " << p1.use_count() << std::endl;

    std::shared_ptr<MyClass> p3 = std::make_shared<MyClass>(99);
    std::cout << "p3 reference count: " << p3.use_count() << std::endl;

    MyClass *rawPtr = p1.get();
    if (rawPtr != nullptr)
    {
        std::cout << "Value of rawPtr: ";
        rawPtr->printValue();
        cout << std::endl;
    }

    p1.reset();
    std::cout << "p1 reference count after reset: " << p1.use_count() << std::endl;

    return 0;
}

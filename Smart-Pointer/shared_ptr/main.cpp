#include <memory>
#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor\n";
    }
    ~MyClass() {
        std::cout << "MyClass Destructor\n";
    }
    void doSomething() {
        std::cout << "Do something\n";
    }
};

int main() {
    std::shared_ptr<MyClass> ptr1(new MyClass);
    std::shared_ptr<MyClass> ptr2 = ptr1;

    ptr1->doSomething();
    ptr2->doSomething();

    return 0;
}

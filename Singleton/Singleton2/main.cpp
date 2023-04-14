#include <iostream>

using namespace std;

class MyClass
{
public:
    ~MyClass()
    {
        cout << "Delete !" << endl;
        if (ptr != nullptr)
        {
            cout << "Delete ptr !" << endl;
            delete ptr;
        }
    };
    static MyClass *getInstance(int ptr)
    {
        if (instance == NULL)
        {
            instance = new MyClass(ptr);
        }
        return instance;
    }
    void showMessage()
    {
        cout << "This is my value parameter: " << ptr << endl;
    }

private:
    int *ptr{NULL};
    static MyClass *instance;
    MyClass(int ptr)
    {
        cout << "Inint new instance ! " << endl
             << endl;
        this->ptr = &ptr;
    };
};

MyClass *MyClass::instance(nullptr);

int main()
{
    MyClass *singleton1 = MyClass::getInstance(1);
    MyClass *singleton2 = MyClass::getInstance(2);

    cout << ((singleton1 == singleton2) ? "SAME" : "DIFFERENT") << endl;

    singleton1->showMessage();
    singleton2->showMessage();

    delete singleton1;
    delete singleton2;
}
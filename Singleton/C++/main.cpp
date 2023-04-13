#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    int *ptr{NULL};
    Singleton(int ptr)
    {
        this->ptr = &ptr;
    }

public:
    static Singleton *getInstance(int ptr)
    {
        if (instance == nullptr)
        {                                  // nếu instance chưa được tạo
            instance = new Singleton(ptr); // tạo instance mới
        }
        return instance; // trả về instance đã được tạo hoặc đã tồn tại
    }
    void showMessage()
    {
        cout << "This is my parameter value address: " << ptr << endl;
    }
};

Singleton *Singleton::instance(nullptr);

int main()
{

    Singleton *singleton1 = Singleton::getInstance(1);
    Singleton *singleton2 = Singleton::getInstance(2);
    cout << ((singleton1 == singleton2) ? "singleton1 same singleton2" : "singleton1 differ singleton2") << endl;

    singleton1->showMessage();
    singleton2->showMessage();

    return 0;
}
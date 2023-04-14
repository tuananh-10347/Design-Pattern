#include <iostream>

using namespace std;

class Singleton
{
private:
    int *ptr{nullptr};
    static Singleton *instance;
    Singleton(int ptr)
    {
        this->ptr = &ptr;
    }

public:
    static Singleton *getInstance(int ptr)
    {
        if (instance == nullptr)
        {
            instance = new Singleton(ptr);
        }
        return instance;
    }
    void showMesseage()
    {
        cout << "Value of ptr: " << ptr << endl;
        ;
    }
    ~Singleton()
    {
        if (ptr != nullptr)
            delete ptr;
        if (instance != nullptr)
            delete instance;
    }
};

Singleton *Singleton::instance(nullptr);

int main()
{
    Singleton *s1 = Singleton::getInstance(1);
    Singleton *s2 = Singleton::getInstance(2);
    cout << ((s1 == s2) ? "singleton1 same singleton2" : "singleton1 differ singleton2") << endl;
    s1->showMesseage();
    s2->showMesseage();

    return 0;
}
#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    int *ptr{nullptr};
    Singleton(int ptr)
    {
        this->ptr = &ptr;
    }

public:
    ~Singleton()
    {
        if (ptr != nullptr)
        {
            delete ptr;
            ptr = NULL;
        }
        if (instance != nullptr)
        {
            delete instance;
            instance = NULL;
        }
    }
    static Singleton *getInstance(int ptr)
    {
        if (instance == NULL)
        {
            instance = new Singleton(ptr);
        }
        return instance;
    }
    void showMesseage()
    {
        cout << "This is my value ptr: " << ptr << endl;
    }
};

Singleton *Singleton::instance(nullptr);
int main()
{
    Singleton *s1 = Singleton::getInstance(1);
    Singleton *s2 = Singleton::getInstance(2);

    cout << ((s1 == s2) ? "same" : "differ") << endl;
    s1->showMesseage();
    s2->showMesseage();
    return 0;
}

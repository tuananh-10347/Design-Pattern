#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    int *ptr;
    Singleton(int ptr)
    {
        this->ptr = &ptr;
    }

public:
    ~Singleton(){};
    static Singleton *getIntance(int ptr)
    {
        if (instance == nullptr)
        {
            instance = new Singleton(ptr);
        }
        return instance;
    }
    void showMesseage()
    {
        cout << "THis is a address of ptr: " << ptr << endl;
    }
};

Singleton *Singleton::instance(nullptr);

int main()
{
    Singleton *s1 = Singleton::getIntance(1);
    Singleton *s2 = Singleton::getIntance(2);

    cout << ((s1 == s2) ? "same" : "different") << endl;
    s1->showMesseage();
    s2->showMesseage();
    return 0;
}
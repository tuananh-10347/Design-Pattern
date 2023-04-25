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
            ptr = nullptr;
        }
    }
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
        cout << "This is a address of ptr: " << ptr << endl;
    }
};

Singleton *Singleton::instance(nullptr);
template <typename T>
void deletePtr(T *&obj)
{
    if (obj != nullptr)
    {
        delete obj;
        obj = nullptr;
    }
}
int main()
{
    Singleton *s1 = Singleton::getIntance(1);
    Singleton *s2 = Singleton::getIntance(2);

    cout << ((s1 == s2) ? "same" : "different") << endl;
    s1->showMesseage();
    s2->showMesseage();
    
    return 0;
}
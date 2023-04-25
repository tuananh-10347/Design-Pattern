#include <iostream>

using namespace std;

void sum(void *num1, void *num2, char type)
{
    switch (type)
    {
    case 'i':
    {
        int *x = static_cast<int *>(num1);
        int *y = static_cast<int *>(num2);
        cout << "Sum x and y: " << *x + *y << endl;
        break;
    }
    case 'f':
    {
        float *x = static_cast<float *>(num1);
        float *y = static_cast<float *>(num2);
        cout << "Sum x and y: " << *x + *y << endl;
        break;
    }
    case 'd':
    {
        double *x = static_cast<double *>(num1);
        double *y = static_cast<double *>(num2);
        cout << "Sum x and y: " << *x + *y << endl;
        break;
    }
    case 'l':
    {
        long *x = static_cast<long *>(num1);
        long *y = static_cast<long *>(num2);
        cout << "Sum x and y: " << *x + *y << endl;
        break;
    }
    default:
        cout << "Not type support!" << endl;
        break;
    }
}

int main()
{
    float a = 5.5, b = 6.1;
    sum(&a, &b, 'i');
    return 0;
}
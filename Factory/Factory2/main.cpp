#include <iostream>

using namespace std;

class Shape
{
public:    
    virtual void showMesseage() = 0;
    virtual ~Shape(){};
};


class Circle : public Shape
{
public:
    ~Circle() override {};
    void showMesseage() override
    {
        cout << "This is Circle" << endl;
    }
};
class Rectangle : public Shape
{
public:
    ~Rectangle() override {};
    void showMesseage() override
    {
        cout << "This is Rectangle" << endl;
    }
};

class Round : public Shape
{
public:
    ~Round() override {};
    void showMesseage() override
    {
        cout << "This is Round" << endl;
    }
};

class ShapeFactory
{
public:
    Shape *createShape(int type)
    {
        switch (type)
        {
        case 1:
            return new Circle();
            break;
        case 2:
            return new Rectangle();
            break;
        case 3:
            return new Round();
            break;
        default:
            return NULL;
            break;
        }
    }
};

int main()
{
    ShapeFactory *factory = new ShapeFactory();
    Shape *shape1 = factory->createShape(1);
    shape1->showMesseage();
    Shape *shape2 = factory->createShape(2);
    shape2->showMesseage();
    Shape *shape3 = factory->createShape(3);
    shape3->showMesseage();

    delete factory;
    delete shape1;
    delete shape2;
    delete shape3;
    return 0;
};
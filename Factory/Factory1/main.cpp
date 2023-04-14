#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual ~Shape(){};
};

class Circle : public Shape
{
public:
    ~Circle() override{};
    void draw() override
    {
        cout << "I'm a Circle" << endl;
    }
};
class Square : public Shape
{
public:
    ~Square() override {};
    void draw() override
    {
        cout << "I'm a Square" << endl;
    }
};
class Rectangle : public Shape
{
public:
    ~Rectangle() override {};
    void draw() override
    {
        cout << "I'm a Rectangle" << endl;
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
            return new Square();
            break;
        case 3:
            return new Rectangle();
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
    shape1->draw();
    Shape *shape2 = factory->createShape(2);
    shape2->draw();
    Shape *shape3 = factory->createShape(3);
    shape3->draw();

    delete factory;
    delete shape1;
    delete shape2;
    delete shape3;
}

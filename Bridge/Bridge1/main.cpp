#include <iostream>

using namespace std;

class Shape
{
public:
    virtual ~Shape(){};
    virtual void showMesseage() = 0;
};

class Circle : public Shape
{
public:
    ~Circle() override{};
    void showMesseage() override
    {
        cout << "This is my Cicle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    ~Rectangle() override{};
    void showMesseage() override
    {
        cout << "This is my Rectangle" << endl;
    }
};

class Color
{
public:
    virtual ~Color(){};
    virtual void apply() = 0;
};

class Red : public Color
{
public:
    ~Red(){};
    void apply() override
    {
        cout << "This is a Red Color" << endl;
    }
};

class Green : public Color
{
public:
    ~Green(){};
    void apply() override
    {
        cout << "This is a Green Color" << endl;
    }
};

class ShapeColor
{
private:
    Shape *shape;
    Color *color;

public:
    ShapeColor(Shape *shape1, Color *color1) : shape(shape1), color(color1){};
    void draw()
    {
        shape->showMesseage();
        color->apply();
    }
};

int main(){
    ShapeColor RedCircle (new Circle, new Red);
    RedCircle.draw();

    ShapeColor GreenCircle(new Circle, new Green);
    GreenCircle.draw();
}
#include <iostream>

using namespace std;

class Shape
{
public:
    //virtual ~Shape();
    virtual void draw() = 0;
};

class Rectangle : public Shape
{
public:
    //~Rectangle() override;
    void draw() override
    {
        cout << "This is a Rectangle";
    }
};

class Round : public Shape
{
public:
    //~Round() override;
    void draw() override
    {
        cout << "This is a Round";
    }
};

class Color
{
public:
    //virtual ~Color(){};
    virtual void apply() = 0;
};

class Red : public Color
{
public:
    //virtual ~Red() override{};
    void apply() override
    {
        cout << "is Red" << endl;
    }
};
class Blue : public Color
{
public:
    //virtual ~Blue() override{};
    void apply() override
    {
        cout << "is Blue" << endl;
    }
};

class ShapeColor
{
private:
    Shape *shape;
    Color *color;

public:
    ShapeColor(Shape *shape1, Color *color1) : shape(shape1), color(color1){};
    void message()
    {
        shape->draw();
        color->apply();
    }
};

int main()
{
    ShapeColor RecRed(new Rectangle, new Red);
    RecRed.message();
    cout << endl;
    ShapeColor RoundRed(new Round, new Red);
    RoundRed.message();

    return 0;
}
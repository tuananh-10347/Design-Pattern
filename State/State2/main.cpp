#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual void move(int x, int y) = 0;
    virtual void setColor(const string &color) = 0;
};

class Rectangle
{
private:
    int x, y;
    int height, width;
    Shape *state;

public:
    Rectangle(int temp_x, int temp_y, int temp_height, int temp_width, Shape *temp_state) : x(temp_x), y(temp_y), height(temp_height), width(temp_width), state(temp_state){};
    void draw()
    {
        state->draw();
    }
    void move(int temp_x, int temp_y)
    {
        this->x = temp_x;
        this->y = temp_y;
        state->move(x, y);
    }
    void setColor(const string &color)
    {
        state->setColor(color);
    }
};

class Circle
{
private:
    int x, y, radius;
    Shape *state;

public:
    Circle(int temp_x, int temp_y, int temp_radius, Shape *temp_state) : x(temp_x), y(temp_y), radius(temp_radius), state(temp_state){};
    void draw()
    {
        state->draw();
    }
    void move(int temp_x, int temp_y)
    {
        this->x = temp_x;
        this->y = temp_y;
        state->move(x, y);
    }
    void setColor(const string &color)
    {
        state->setColor(color);
    }
};

class RectangleState : public Shape
{
private:
    string color{"red"};

public:
    void draw() override
    {
        cout << "Draw Rectangle with " << color << " of color" << endl;
    }
    void move(int x, int y) override
    {
        cout << "Move the rectangle to x: " << x << " and y: " << y << endl;
    }
    void setColor(const string &color) override
    {
        this->color = color;
    }
};

class CircleState : public Shape
{
private:
    string color{"green"};

public:
    void draw() override
    {
        cout << "Draw the Circle with " << color << " of color" << endl;
    }
    void move(int x, int y) override
    {
        cout << "Move the Circle to x: " << x << " and y: " << y << endl;
    }
    void setColor(const string &color) override
    {
        this->color = color;
    }
};

int main()
{
    Shape *rectState = new RectangleState();
    Rectangle *rect = new Rectangle(5, 10, 20, 20, rectState);

    rect->draw(); // red

    rect->setColor("green");
    rect->draw(); // green

    rect->setColor("yellow");
    rect->draw(); // yellow

    cout << endl
         << endl;
    Shape *circleState = new CircleState();
    Circle *cir = new Circle(0, 10, 20, circleState);

    cir->draw(); // green

    cir->setColor("red");
    cir->draw(); // red

    cir->setColor("blue");
    cir->draw(); // blue

    return 0;
}

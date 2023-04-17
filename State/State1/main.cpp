#include <iostream>

using namespace std;

// Khai báo lớp trạng thái của hình học
class ShapeState
{
public:
    virtual void draw() = 0;                 // Phương thức để vẽ hình
    virtual void move(int x, int y) = 0;     // Phương thức để di chuyển hình
    virtual void setColor(string color) = 0; // Phương thức để thiết lập màu sắc cho hình
};

// Khai báo lớp Rectangle
class Rectangle
{
private:
    int x, y, width, height;
    ShapeState *state;

public:
    Rectangle(int x, int y, int width, int height, ShapeState *state)
    {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        this->state = state;
    }

    void draw()
    {
        state->draw();
    }

    void move(int x, int y)
    {
        this->x = x;
        this->y = y;
        state->move(x, y);
    }

    void setColor(string color)
    {
        state->setColor(color);
    }
};

// Khai báo lớp Circle
class Circle
{
private:
    int x, y, radius;
    ShapeState *state;

public:
    Circle(int x, int y, int radius, ShapeState *state)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
        this->state = state;
    }

    void draw()
    {
        state->draw();
    }

    void move(int x, int y)
    {
        this->x = x;
        this->y = y;
        state->move(x, y);
    }

    void setColor(string color)
    {
        state->setColor(color);
    }
};

// Khai báo lớp trạng thái cụ thể cho hình chữ nhật
class RectangleState : public ShapeState
{
private:
    string color{"đỏ"};

public:
    void draw() override
    {
        cout << "Vẽ hình chữ nhật với màu " << color << endl;
    }

    void move(int x, int y) override
    {
        cout << "Di chuyển hình chữ nhật đến tọa độ (" << x << ", " << y << ")" << endl;
    }

    void setColor(string color) override
    {
        this->color = color;
    }
};

// Khai báo lớp trạng thái cụ thể cho hình tròn
class CircleState : public ShapeState
{
private:
    string color{"xanh"};

public:
    void draw() override
    {
        cout << "Vẽ hình tròn với màu " << color << endl;
    }

    void move(int x, int y) override
    {
        cout << "Di chuyển hình tròn đến tọa độ (" << x << ", " << y << ")" << endl;
    }

    void setColor(string color) override
    {
        this->color = color;
    }
};

int main()
{
    // Tạo một hình chữ nhật với màu sắc mặc định là đỏ
    ShapeState *rectState = new RectangleState();
    Rectangle *rect = new Rectangle(0, 0, 10, 5, rectState);

    // Vẽ hình chữ nhật đỏ
    rect->draw();

    // Thay đổi màu sắc của hình chữ nhật sang màu xanh
    rectState->setColor("xanh");
    rect->draw();

    // Thay đổi màu sắc của hình chữ nhật sang màu vàng
    rectState->setColor("vàng");
    rect->draw();

    // Tạo một hình tròn với màu sắc mặc định là xanh
    ShapeState *circleState = new CircleState();
    cout << endl;
    Circle *circle = new Circle(0, 0, 5, circleState);

    // Vẽ hình tròn xanh
    circle->draw();

    // Di chuyển hình tròn đến tọa độ (10, 10)
    circleState->move(10, 10);
    circle->draw();

    // Thay đổi màu sắc của hình tròn sang màu đỏ
    circleState->setColor("đỏ");
    circle->draw();

    return 0;
}

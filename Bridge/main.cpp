#include<iostream>

using namespace std;

class Shape{
    public:
    //virtual ~Shape();
    virtual void draw() = 0;
};

class Rectangle : public Shape{
    public:
    //~Rectangle() override;
    void draw() override{
        cout<<"This is a Rectangle";
    }
};
class Circle : public Shape{
    public:
    //~Circle() override;
    void draw() override{
        cout<<"This is a Circle";
    }
};

class Color{
    public:
    //virtual ~Color();
    virtual void apply() = 0;
};
class Red : public Color{
    public:
    //~Red() override;
    void apply() override{
        cout<<" and color is Red"<<endl;
    }
};

class Green : public Color{
    public:
    //~Green() override;
    void apply() override{
        cout<<" and color is Green"<<endl;
    }
};

class ShapeColor{
    private: 
    Shape *shape;
    Color *color;
    public:
    ShapeColor(Shape *s1, Color *c1): shape(s1), color(c1){}
    void drawShapeColor(){
        shape->draw();
        color->apply();
    }
};

int main(){
    ShapeColor rectangleRed(new Rectangle, new Red);
    rectangleRed.drawShapeColor();

    ShapeColor circleRed(new Circle, new Red);
    circleRed.drawShapeColor();
    return 0;
}
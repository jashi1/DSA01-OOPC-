#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() const = 0; 
    virtual ~Shape() {} 
};
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(4.0);
    std::cout << "Area of the rectangle: " << shape1->area();
    std::cout << "\nArea of the circle: " << shape2->area();
    delete shape1;
    delete shape2;
    return 0;
}


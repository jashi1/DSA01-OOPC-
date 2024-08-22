#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() = 0; 
    virtual double volume() = 0;
};
class Sphere : public Shape {
public:
    Sphere(double radius) 
	: radius(radius) {}
    double area() override {
        return 4 * 3.14 * radius * radius;
    }
    double volume() override {
        return (4.0 / 3) * 3.14 * radius * radius * radius;
    }
private:
    double radius;
};
class Cylinder : public Shape {
public:
    Cylinder(double radius, double height) 
	: radius(radius), height(height) {}
    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() override {
        return M_PI * radius * radius * height;
    }
private:
    double radius;
    double height;
};
int main() {
    Sphere s(5.0);
    Cylinder c(3.0, 6.0);
    std::cout << "Sphere area: " << s.area();
    std::cout << "\nSphere volume: " << s.volume();
    std::cout << "\nCylinder area: " << c.area();
    std::cout << "\nCylinder volume: " << c.volume();
    return 0;
}

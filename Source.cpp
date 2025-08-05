#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual methods to be overridden by derived classes
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    const double PI = 3.141592653589793; 
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:

    Circle(double r) : radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double area() const override {
        return PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
  
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double a, b, c; // Three sides of the triangle

public:

    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {
        cout << "Triangle created with sides: " << a << ", " << b << ", " << c << endl;
    }

    void setSides(double side1, double side2, double side3) {
        a = side1;
        b = side2;
        c = side3;
    }

    double getSideA() const {
        return a;
    }

    double getSideB() const {
        return b;
    }

    double getSideC() const {
        return c;
    }

    double area() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }
};

// Main function to test the classes
int main() {
    // Circle object
    Circle circle(5.0);
    cout << "Circle area: " << circle.area() << endl;
    cout << "Circle perimeter: " << circle.perimeter() << endl;

    cout << "----------------------------------------------------------" << endl;
    // Rectangle object
    Rectangle rect(4.0, 6.0);
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Rectangle perimeter: " << rect.perimeter() << endl;

    cout << "----------------------------------------------------------" << endl;
    // Triangle object
    Triangle tri(3.0, 4.0, 5.0);
    cout << "Triangle area: " << tri.area() << endl;
    cout << "Triangle perimeter: " << tri.perimeter() << endl;

    return 0;
}

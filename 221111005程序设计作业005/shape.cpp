#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0; // 纯虚函数，用于计算面积
    virtual double getPerimeter() = 0; // 纯虚函数，用于计算周长
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
    double getPerimeter() {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() {
        return length * width;
    }
    double getPerimeter() {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
    }
    double getArea() {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double getPerimeter() {
        return a + b + c;
    }
};

int main() {
    Circle c(5);
    Rectangle r(3, 4);
    Triangle t(3, 4, 5);
    cout << "Circle area: " << c.getArea() << endl;
    cout << "Circle perimeter: " << c.getPerimeter() << endl;
    cout << "Rectangle area: " << r.getArea() << endl;
    cout << "Rectangle perimeter: " << r.getPerimeter() << endl;
    cout << "Triangle area: " << t.getArea() << endl;
    cout << "Triangle perimeter: " << t.getPerimeter() << endl;
    return 0;
}

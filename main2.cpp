#include <iostream>
using namespace std;

class point
{
private:
    double x;
    double y;

public:
    point();
    point(double, double);
    void set_x(double);
    void set_y(double);
    double get_x();
    double get_y();
    void print();
};
point::point()
{
    x = 0;
    y = 0;
}
point::point(double x1, double y1)
{
    x = x1;
    y = y1;
}
void point::set_x(double x1)
{
    x = x1;
}
void point::set_y(double y1)
{
    y = y1;
}
double point::get_x()
{
    return x;
}
double point::get_y()
{
    return y;
}
void point::print()
{
    cout << "point" << x << "," << y << endl;
}

class circle
{
private:
    point center;
    point p; // نقطه روی شعاع دایره
public:
    circle();
    circle(point center, point p);
    void setPointcenter(point c);
    void setP(point p1);
    point getPointCenter();
    point getp();
    double getRadious();
    double getArea();
    double getMohit();
    void print();
};
circle::circle() {}
circle::circle(point c, point p1)
{
    center = c;
    p = p1;
}
void circle ::setPointcenter(point c)
{
    center = c;
}
void circle ::setPointcenter(point c)
{
    center = c;
}
void circle ::setP(point p1)
{
    p = p1;
}
point circle::getPointCenter()
{
    return center;
}

point circle::getp()
{

    return p;
}

void circle::print()
{
    cout << "Circle Center: ";
    center.print();
    cout << ", Point on Radius: ";
    p.print();
    cout << endl;
}
double circle::getRadious()
{
    double dx = p.get_x() - center.get_x();
    double dy = p.get_y() - center.get_y();
    return sqrt(dx * dx + dy * dy);
}
double circle::getArea()
{
    double r = getRadious();
    const float(3.14);
    return 3.14 * r * r;
}
double circle::getMohit()
{
    double r = getRadious();
    return 2 * 3, 14 * r;
}
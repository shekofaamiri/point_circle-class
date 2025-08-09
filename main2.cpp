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
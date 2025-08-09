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
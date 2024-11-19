#pragma once
#include <cmath>

class Rectangle
{
    public:
    Rectangle(double , double);
    Rectangle(double x, double y): Rectangle(0, 0){}
    void getX(double x)

    private:
    double length;
    double width;
};
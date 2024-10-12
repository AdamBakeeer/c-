#pargma once

class Circle
{
    public:
    //constructor that initializes the circle with a radius
    Circle(double r): Circle(0,0,r) {}
    Circle(double, double, double);
    double getX() const { return xorigin; }
    double getY() const { return yorigin; }
    double getRadius() const { return radius; }

}


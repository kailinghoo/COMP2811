#include <stdexcept>  // <1>
#include "circle.hpp"  // <2>
#include <iostream>

Circle::Circle(double x, double y, double r):  // <3>
  Shape(x, y), radius(r)  // <4>
{
  if (radius <= 0.0) {
    throw std::invalid_argument("radius must be > 0");  // <5>
  }
}

bool Circle::containsPoint(double x, double y) const  // <6>
{
  double dx = x - xorigin;
  double dy = y - yorigin;
  return sqrt(dx*dx + dy*dy) <= radius;
}

void Circle::draw() const {
    std::cout << "Drawing Circle("
              << "x=" << getX()
              << ", y=" << getY()
              << ", radius=" << getRadius()
              << ")" << std::endl;
}
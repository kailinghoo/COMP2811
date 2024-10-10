#include <stdexcept>
#include "rect.hpp"
#include <iostream>

Rectangle::Rectangle(double x, double y, double w, double h):
    Shape(x, y), width(w), height(h)
{
    if (height <= 0.0 || width <= 0.0){
        throw std::invalid_argument("Height and width must be > 0");
    }
}

double Rectangle::area() const{
    return height*width;
}

double Rectangle::perimeter() const{
    return (height+width)*2;
}

void Rectangle::draw() const {
    std::cout << "Drawing Rectangle("
              << "x=" << getX()
              << ", y=" << getY()
              << ", height=" << getHeight()
              << ", width=" << getWidth()
              << ")" << std::endl;
}
#pragma once
#include <stdexcept>
#include <shape.hpp>

#include <cmath>
#include <iostream>

class Rectangle : public Shape
{
    private:
        double xorigin, yorigin;
        double height, width;

    public:
        Rectangle(double w, double h): Rectangle(0,0,w,h){}
        Rectangle(double, double, double, double);
        double getHeight() const { return height; }
        double getWidth() const { return width; }
        double area() const;
        double perimeter() const;
        void draw() const override;
};
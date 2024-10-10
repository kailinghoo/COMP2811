#include <iostream>
#include "shape.hpp"
#include "rect.hpp"
#include "circle.hpp"
#include <vector>

using namespace std;

int main(){
    vector<Shape*> shapes;
    shapes.push_back(new Circle(2.5));
    shapes.push_back(new Rectangle(0.0, 1.0, 11.5, 5.2));
    shapes.push_back(new Circle(-1.6, 7.2, 3.5));

    for (Shape* s: shapes) {
        s->draw();
    }
}
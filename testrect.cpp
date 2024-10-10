#include "rect.hpp"
#include <iostream>

using namespace std;

int main(){
    try{
        Rectangle a(5.5,6.2,7.9,3.1);
        Rectangle b(2,3,7,8);

        cout << "Area  of rectangle A = " << a.area() << endl;
        cout << "Area  of rectangle B = " << b.area() << endl;
        cout << "Perimeter  of rectangle A = " << a.perimeter() << endl;
        cout << "Perimeter  of rectangle B = " << b.perimeter() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
        cerr << "Please ensure the width and height are positive integers." << std::endl;
        return 1;
    }
    return 0;
}

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"


// Main for Classes
int main() {
    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    return 0;
}
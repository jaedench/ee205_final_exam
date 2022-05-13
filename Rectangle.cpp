///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Jaeden Chang <jaedench@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>

#include "Rectangle.h"

Rectangle::Rectangle(double newLength, double newWidth) {
    if (newLength < 0 || newWidth < 0) {
        throw std::invalid_argument("length and width must be > 0");
    }
    length = newLength;
    width = newWidth;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::compute_area() {
    double area = length * width;
    return area;
}

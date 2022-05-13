///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.cpp
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

#include "Square.h"
#include "Rectangle.h"

Square::Square(double newSide) : Rectangle( newSide, newSide ) {
    length = newSide;
    width = newSide;
}

double Square::getSide() {
    return Rectangle::getLength();
}

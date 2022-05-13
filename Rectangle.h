///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Jaeden Chang <jaedench@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Shape.h"

class Rectangle : public Shape{
protected:
    double length;
    double width;

public: // Constructor
    Rectangle(double newLength, double newWidth );

public: //Getters
    double getLength() const;

    double getWidth() const;

public: //Override
    double compute_area();
};

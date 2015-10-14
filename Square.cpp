/****************************************************************
 *Author: Sam Nelson						*
 *Date: 12 May 2015						*
 *Description: Project 7a					*
 **************************************************************/

#include "Square.hpp"

//A square is a rectangle but a rectangle is not a square.  Since
//a square is a rectangle, we can use rectangle class to setup a 
//square...but we need to make sure the sides stay the same size.
Square::Square(double bothSides) : Rectangle(bothSides, bothSides){}

//Square realy only has a set side...but we need to set the length 
//and width to keep consistent with rectangle class
void Square::setLength(double bothSides)
{
    Rectangle::setLength(bothSides);
    Rectangle::setWidth(bothSides);
}

void Square::setWidth(double bothSides)
{
    Rectangle::setWidth(bothSides);
    Rectangle::setLength(bothSides);
}



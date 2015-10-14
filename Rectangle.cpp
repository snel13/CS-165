/****************************************************************
 *Author: Sam Nelson						*
 *Date: 12 May 2015						*
 *Description: project 7a					*
 **************************************************************/

#include "Rectangle.hpp"

//default constructor
Rectangle::Rectangle(){
    rLength = 0.0;
    rWidth = 0.0;
}

//overloaded constructor
Rectangle::Rectangle(double rLength, double rWidth)
{
    setLength(rLength);
    setWidth(rWidth);
}

//set method
void Rectangle::setLength(double rLength)
{
    this->rLength = rLength;
}

//set method for rectangle width
void Rectangle::setWidth(double rWidth)
{
    this->rWidth = rWidth;
}

//get Area method
double Rectangle::area()
{
    return this->rLength * this->rWidth;
}

//get perimeter
double Rectangle::perimeter(){
    return 2 * this->rLength + 2 * this->rWidth;
}

/****************************************************************
 *Author: Sam Nelson						*
 *Date: 12 May 2015						*
 *Description: Project 7a					*
 **************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {

protected:
    double rLength;
    double rWidth;
    
public:
    Rectangle();
    Rectangle(double, double);
    void setLength(double);
    void setWidth(double);
    double area();
    double perimeter();
};
#endif 

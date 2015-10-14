/****************************************************************
 *Author: Sam Nelson						*
 *Date: 12 May 2015						*
 *Description: Project 7a					*
 **************************************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square: public Rectangle {

	private:
    		double bothSides;
    
	public:
		//constructor
    		Square(double);
   		
		//set methods
    		void setLength(double);
    		void setWidth(double);

};
#endif

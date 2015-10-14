/********************************************************************************
* Author: Sam Nelson								*
* Date: 5/14/2015								*
* Description: 7b								*
********************************************************************************/

#include "MyInteger.hpp"

MyInteger::MyInteger()
{
	pInteger = new int;
	*pInteger = 0;
}

// constructor will take int and setup
MyInteger::MyInteger(int pointInt)
{
	this->pInteger = new int;
	*pInteger = pointInt;
}

// copy constructor.
MyInteger::MyInteger(const MyInteger &number)
{
	this->pInteger = new int;
	*pInteger = *number.pInteger;
}

// overloaded operator
MyInteger MyInteger::operator=(const MyInteger &number)
{
	this->pInteger = new int;
	 *pInteger = *number.pInteger;
	 return *pInteger;
}

//set method
void MyInteger::setMyInt(int pointInt)
{
	*pInteger = pointInt;
}

//get method
int MyInteger::getMyInt()
{
	return *pInteger;
}

//destructor 
MyInteger::~MyInteger()
{
	delete pInteger;
	pInteger = 0;
}



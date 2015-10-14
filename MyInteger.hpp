/********************************************************************************
* Author: Sam Nelson								*
* Date: 5/14/2015								*
* Description: 7b								*
********************************************************************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger

{
private:

	int *pInteger;

public:

	MyInteger();
	MyInteger(int);
	MyInteger(const MyInteger&);

	MyInteger operator=(const MyInteger&);

	void setMyInt(int);
	int getMyInt();

	~MyInteger();

};
#endif 


#include<iostream>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	rectangle A;
    int width, length;
	A.setwidth(10);
	A.setlength(20);
    width=A.getwidth();
    length=A.getlength();
	A.rotate(width, length);
	A.area(width,length);
	A.draw(width,length);
	
}
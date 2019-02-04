#include<iostream>
#include<string>
using namespace std;

class rectangle
{
private:
	int width;
	int length;
public:
	int getwidth()
	{
		
		return width;
	}
	int getlength()
	{
		
		return length;
	}
	void setlength(int l)
	{
		length=l;
	}
	void setwidth(int w)
	{
		width=w;
	}
	void rotate(int width,int length)
	{
		int temp;
		temp=width;
		width=length;
		length=temp;
	}
	int area(int width, int length)
	{
		int area;
		area=length*width;
		return area;
	}
	void draw(int width, int length)
	{
		for(int i=0;i<length;i++)
			for(int j=0;j<width;j++)
			{
				cout<<"*";
				
			}
			cout<<endl;
	}

};


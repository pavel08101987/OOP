#include<iostream>
#include <cmath>
using namespace std;

#define tab  "\t"

class Point
{
	double x;
	double y;
	

public:
	double get_x()const
	{
		return x;

	}

	

	double get_y()const
	{
		return y;

	}

	

	void set_x(double x)

	{
		this->x = x;
	}

	void set_y(double y)

	{
		this->y = y;
	}

	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance =sqrt( x_distance * x_distance + y_distance * y_distance);
		return distance;
	}


	void print()const
	{
		cout << "X=" << x << tab << "Y=" << y << endl;

	}


	

	

};





//#define STRUCT_POINT 

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef STRUCT_POINT

	Point A; 
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A;
	cout << pA->x << tab << pA->y << endl;
#endif

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << tab << A.get_y() << endl;
	
	Point B;
	B.set_x(4);
	B.set_y(5);
	cout << B.distance(A) << endl;


	/*for (int i =0; i < 5; i++)
	{
		cout << i << tab;

	}
	cout << endl; */

}
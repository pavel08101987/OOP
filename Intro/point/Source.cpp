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

	// constructor

	Point()
	{
		x = y = 0;
		cout << "Constructor:\t" << this << endl;

	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "SingleArgumentConstructor:\t" << this << endl;
	
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;

	}

	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:\t" << this << endl;
	
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//Operators

	void operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssigment:\t\t" << this << endl;

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

double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}



//#define STRUCT_POINT 
//#define DISTANCE_CHECK

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

#ifdef DISTANCE_CHECK
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << tab << A.get_y() << endl;
	
	Point B;
	B.set_x(4);
	B.set_y(5);
	cout << B.distance(A) << endl;
	cout << A.distance(B) << endl;
	cout << distance(A, B) << endl;
	cout << distance(B, A) << endl;


	/*for (int i =0; i < 5; i++)
	{
		cout << i << tab;

	}
	cout << endl; */
#endif  //DISTANCE_CHECK

	Point A;
	A.print();
	Point B = 3;
	B.print();
	Point C(2, 3);
	C.print();
	Point D=C;
	D.print();
	Point E;
	E = C;
	E.print();
}
#include<iostream>
#include "Point.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Point a;

	Point b = a;
	Point c(100, 200);
	Point d = Point(101, 201);

	Point e(10);
	Point e1 = Point(11);
	Point e2 = 12;

	Point* p = new Point;
	Point* p1 = new Point(111);
	Point* p2 = new Point(111, 222);

	delete p;
	delete p1;
	delete p2;

	Point arr[4] = {1, 2, 3, 4};

	system("pause");
	return 0;
}
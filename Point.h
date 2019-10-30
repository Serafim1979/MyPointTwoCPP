#ifndef POINT_H
#define POINT_H

class Point
{
	int x, y;
public:
	Point(const Point&); //copy
	Point();             //default
	Point(int);          //conversion constructor
	Point(int, int);     //parametr
	~Point();
	void Print()const;
};

#endif // !POINT_H


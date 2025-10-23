#include <iostream>
#include "Point.h"
#include "Square.h"
using namespace std;



Point::Point(int px, int py)
{

}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int tx)
{
	x = tx;
}

void Point::setY(int ty)
{
	y = ty;
}





Square::Square(const string, int, int, unsigned int) 
{
	
}

unsigned int Square::getSide() const
{
	return side;
}

unsigned int Square::getArea() const
{
	return area;
}

string Square::getName() const
{
	return name;
}

void Square::setSide(unsigned int sside)
{
	side = sside;
}

void Square::setArea(unsigned int sside)
{
	area = sside * sside;
}

void Square::setName(string nname)
{
	name = nname;
}






int main()
{
	int num = 0;
	cin >> num;
	const int num2 = num;
	Square q1[num2];

	int x = 0;
	int y = 0;
	string n;
	int s = 0;
	for (int i = 0; i < num; i++) {
		cin >> n >> x >> y >> s;
		q1[i].setX(x);
		q1[i].setY(y);
		q1[i].setName(n);
		q1[i].setSide(s);
	}

	cout << "Squares in increasing order of area";
	int _maxx = -1;
	int _minx = 99999;

	int arr1[num2];
	for (int i = 0; i < num- 1; i++){
		if (q1[i].getSide() > q1[i+1].getSide())
		int temp = q1[i-1].getSide();
		int temp2 = q1[i].getSide();

		

	}




}

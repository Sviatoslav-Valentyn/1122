#include "Triangle.h"

double Triangle::Hypotenuse()
{
	return pow(first,2) + pow(second,2);
}

void Triangle::read()
{
	int a, b;
	do
	{
		cout << " a = "; cin >> a;
		cout << " b = "; cin >> b;
	} while (!init(a, b));
}

void Triangle::display()
{
	cout << endl;
	cout << "a = " << get_first() << endl;
	cout << "b = " << get_second() << endl;
}

bool Triangle::init(int first, int second)
{
	if (first > 0 && second > 0)
	{
		set_first(first);
		set_second(second);
		return true;
	}
	else
		return false;
}
#pragma once
#include <iostream>
using namespace std;

class Triangle
{
private:
	int first, second;
public:
	double Hypotenuse();
	bool init(int first, int second);
	void read();
	void display();
	int get_first() { return first; };
	double get_second() { return second; };
	void set_first(int value) { first = value; };
	void set_second(int value) { second = value; };
};
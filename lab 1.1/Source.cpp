#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle TotalHypotenuse(int x, double y)
{
	Triangle k;
	if (!k.init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return k;
}

int main()
{
	Triangle z;
	z.read();
	z.display();
	cout << "Total Hypotenuse:" << z.Hypotenuse() << endl;
	int x, y;
	cout << " a = "; cin >> x;
	cout << " b = "; cin >> y;
	Triangle k = TotalHypotenuse(x, y);
	k.display();
	int result = k.Hypotenuse();
	cout << "MakeHypotenuse " << result << endl;
	cin.get();
	return 0;
}
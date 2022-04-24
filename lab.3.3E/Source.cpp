#include"Alcohol.h"
#include"Liquid.h"
#include"Object.h"
#include <iostream>
using namespace std;



int main()
{
	Alcohol a, c;
	c = a;
	Liquid b("water", 9);

	cout << " "; cin >> a;

	cout << a << endl;
	a.changeStrength(a);
	a.changeDensity();
	cout << a;
	cout << "count = " << Object::Count() << endl;
	return 0;
}
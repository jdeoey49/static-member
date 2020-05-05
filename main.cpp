#include<iostream>
#include "StaticVariableClass.h"
using namespace std;
int StaticVariableClass::count_ = 0;//static member variable must be declare as a global variable
int main()
{
	StaticVariableClass a;
	cout << "\na.getCount()=" << a.getCount() << endl;
	cout << "a.getID()=" << a.getID() << endl;
	StaticVariableClass b;
	cout << "\ngetCount()=" << b.getCount() << endl;
	cout << "b.getID()=" << b.getID() << endl;
	StaticVariableClass c;
	cout << "\ngetCount()=" << c.getCount() << endl;
	cout << "c.getID()=" << c.getID() << endl;

	return 0;
}

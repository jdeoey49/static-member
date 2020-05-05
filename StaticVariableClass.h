#pragma once
class StaticVariableClass
{
public:
	StaticVariableClass();
	int getCount();
	int getID();
private:
	static int count_;
	int id_;
};


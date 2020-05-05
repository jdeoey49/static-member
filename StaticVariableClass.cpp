#include "StaticVariableClass.h"
StaticVariableClass::StaticVariableClass() 
{
	count_++;
	id_ = count_;
}
int StaticVariableClass::getCount()
{
	return count_;
}
int StaticVariableClass::getID()
{
	return id_;
}
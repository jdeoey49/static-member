#include<iostream>
#include<iomanip>
#include"SavingAccount.h"
using namespace std;
double SavingAccount::rate_ = 0.0;//initialize static member variable
int main()
{
	//calling static member function. We can do this even before an object is instantiate
	SavingAccount::setInterestRate(2.5);

	SavingAccount a;
	a.depositMoney(100);
	a.addInterest();
	cout << fixed << setprecision(2);
	cout << "Saving after interest: " << a.getAmount() << endl;
	
	return 0;
}
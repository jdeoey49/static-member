#pragma once
class SavingAccount
{
public:
	SavingAccount();
	~SavingAccount();
	static void setInterestRate(double);//static member function
	void addInterest();
	double getAmount() const;
	void depositMoney(double m);
private:
	double amount_;
	static double rate_;
};


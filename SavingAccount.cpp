#include "SavingAccount.h"
SavingAccount::SavingAccount():amount_(0)
{
}
SavingAccount::~SavingAccount()
{
}
void SavingAccount::setInterestRate(double rate)
{
	(rate > 0.0&&rate < 100.0) ? rate_ = rate : rate_ = 0.0;
}
void SavingAccount::addInterest()
{
	amount_ = amount_ + (amount_*rate_ / 100);
}
double SavingAccount::getAmount() const
{
	return amount_;
}
void SavingAccount::depositMoney(double m)
{
	amount_ = m;
}
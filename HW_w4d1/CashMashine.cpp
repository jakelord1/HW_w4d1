#include "CashMashine.h"
#include <iostream>
using namespace std;
CashMashine::CashMashine(string en, int mon, int mi, int ma)
{
	id = en;
	money = mon;
	min = mi;
	max = ma;
}

void CashMashine::MoneyWork(int* a, int* g, int e)
{
	while (*a >= e) {
		money -= e;
		*a -= e;
		*g += e;
	}
}

void CashMashine::GetMoney(int amount)
{
	money += amount;
	cout << money << endl;
}

int CashMashine::GiveMoney(int amount)
{
	int getted = 0;
	if (amount >= min && amount <= max) {
		MoneyWork(&amount, &getted, 1000);
		MoneyWork(&amount, &getted, 500);
		MoneyWork(&amount, &getted, 200);
		MoneyWork(&amount, &getted, 100);
		MoneyWork(&amount, &getted, 50);
		MoneyWork(&amount, &getted, 10);
		MoneyWork(&amount, &getted, 5);
		MoneyWork(&amount, &getted, 1);
		cout << money << endl;
		return getted;
	}
	else {
		cout << "Money you want to get is out of limits" << endl;
		return 0;
	}
}

string CashMashine::Tostring() const
{
	char buff[10];
	_itoa_s(money, buff, 10);
	buff[9] = '\0';
	string Mon = buff;
	return Mon;
}

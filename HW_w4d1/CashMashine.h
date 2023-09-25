#pragma once
#include <string>
using namespace std;

class CashMashine
{
	string id;
	int money;
	int min, max;
public:
	CashMashine() = default;
	CashMashine(string en, int mon = rand() % 700000, int min = 100, int max = 50000);
	void MoneyWork(int* a, int* g, int e);
	void GetMoney(int amount);
	int GiveMoney(int amount);

	string Tostring() const;
};


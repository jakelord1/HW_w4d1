#include <iostream>
#include <string>
#include "CashMashine.h"
using namespace std;

int main()
{
    CashMashine obj1("4s55frv1", 100000);
    obj1.GiveMoney(20000);
    obj1.GetMoney(30000);
    cout << obj1.Tostring();
}
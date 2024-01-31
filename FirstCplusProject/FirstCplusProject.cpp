#include <iostream>
#include <vector>
#include "Pokemon.h"
using namespace std;

void EarMoneyByRef(int&  wallet, int wage) {
    wallet += wage;
    if (wage >= 0) {
        wallet -= wage / 4;
    }
}
void EarMoneyByPointer(int* wallet, int wage) {
    wallet += wage;
    if (wage >= 0) {
        wallet -= wage / 4;
    }
}
Pokemon tortank{ "tortank", "big pokemon", 50, 10 };

int main()
{
    int money = 0;
    int* bankAccount = &money;

    cout << "The value " << money << " is stored in " << &money << endl;
    int earnmoney;
    cout << "how many do you earn ?" << endl;
    cin >> earnmoney;
    EarMoneyByPointer(bankAccount,earnmoney);
    EarMoneyByRef(money, earnmoney);


    cout << "okay, I added " << earnmoney << " to your wallet, now you have " << money << endl;
}

#include <iostream>
using namespace std;

void EarMoney(int wallet, int wage) {
    wallet += wage;
    wallet -= (int)(wage / 4);
}



int main()
{
    cout << "What is your name ?" << endl;
    string answer;
    cin >> answer;
    cout << "Hello " << answer << endl << ", how are you today ?" << endl;


    int money = 14;
    int* bankAccount = &money;

    cout << "The value " << money << " is stored in " << &money << endl;
    cout << "The value " << answer << " is stored in " << &answer << endl;
    int earnmoney;
    cout << "how many do you earn ?" << endl;
    cin >> earnmoney;
    EarMoney(money,earnmoney);

    cout << "okay, I added " << earnmoney << " to your wallet, now you have " << money << endl;
}

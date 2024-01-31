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
    string pokemonName;
    string pokemonDesc;
    float pokemonLife;
    float pokemonDamage;

        cout << "what is the name of your pokemon ?";
        cin >> pokemonName;
        cout << "what is the description of " << pokemonName;
        cin >> pokemonDesc;
        cout << "how many life points ?";

        Pokemon pokemonName{pokemonName, pokemonDesc, pokemonLife, pokemonDamage}
}

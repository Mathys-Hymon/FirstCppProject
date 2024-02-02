#include <iostream>
#include <vector>
#include "Pokemon.h"
using namespace std;


Pokemon tortank{ "tortank", "big pokemon", 50, 10 };

int main()
{
    string pokemonName;
    string pokemonDesc;
    float pokemonLife = 0;
    float pokemonDamage = 0;

        cout << "what is the name of your pokemon ?" << endl;
        cin >> pokemonName;
        cout << "what is the description of " << pokemonName << endl;
        cin >> pokemonDesc;
        cout << "how many life points ?" << endl;
        cin >> pokemonLife;
        cout << "how many attack points ?" << endl;
        cin >> pokemonDamage;

        Pokemon tortank{ pokemonName, pokemonDesc, pokemonLife, pokemonDamage };


}

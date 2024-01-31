#include "Pokemon.h"


Pokemon::Pokemon(string newName, string newDesc, float newLife, float newAttack)
{
	name = newName;
	description = newDesc;
	maxLife = newLife;
	lifePoints = maxLife;
	attackdamage = newAttack;
}

void Pokemon::Attack(Pokemon ennemy, int attackDamage)
{
	ennemy.Damaged(attackDamage);
}

void Pokemon::Damaged(float damages)
{
	lifePoints -= damages;
	if (lifePoints <= 0) {
		Die();
	}
}

void Pokemon::FlipflopPokeball()
{
	if (inPokeball) {
		inPokeball = false;
		cout << name << "get out of the pokeball" << endl;
	}
	else {
		inPokeball = true;
		cout << name << "go in is pokeball" << endl;
	}
}

void Pokemon::Die()
{
	cout << name <<" is dead" << endl;
}

void Pokemon::Heal(float healAmount)
{
	lifePoints += healAmount;
}

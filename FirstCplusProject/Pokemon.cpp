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
	cout << name << " take " << damages << " damages" << endl;
	
	if (lifePoints <= 0) {
		Die();
	}
	else {
		cout << name << " get " << lifePoints << " life left" << endl;
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
	cout << name <<" is dead RIP" << endl;
}

void Pokemon::Heal(float healAmount)
{
	lifePoints += healAmount;
	cout << name << " eat a berry which give him " << healAmount << endl;
	cout << name << " now have " << lifePoints << endl;
}

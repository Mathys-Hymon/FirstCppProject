#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
private :
	 string name;
	 string description;
	 float lifePoints;
	 float maxLife;
	 float attackdamage;
	 bool inPokeball = true;

	 public :

		 Pokemon(string name, string description, float life, float attackDamage);
		 void Attack(Pokemon ennemy,int damages);
		 void Damaged(float damages);
		 void FlipflopPokeball();
		 void Die();
		 void Heal(float healAmount);

};


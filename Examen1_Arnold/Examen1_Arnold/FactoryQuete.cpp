#include "FactoryQuete.h"
#include <ctime>
#include <cstdlib>

int Generate(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Quete* FactoryQuete::getRandomQuete()
{
	Quete* maQuete(nullptr);
	int prob = Generate(1, 100);

	if (prob >= 1 && prob <= 75)
	{
		
		maQuete = new Quete("Quete" + std::to_string(Generate(1,100000)),Quete::Difficulte::Facile,Generate(1,10), Generate(100, 1000), Generate(100, 2000));
	}
	else if (prob > 75 && prob <= 90)
	{
		maQuete = new Quete("Quete" + std::to_string(Generate(1, 100000)), Quete::Difficulte::Moyen, Generate(11, 25), Generate(1000, 5000), Generate(2000, 4000));

	}
	else
	{
		maQuete = new Quete("Quete" + std::to_string(Generate(1, 100000)), Quete::Difficulte::Moyen, Generate(26, 99), Generate(5000, 35000), Generate(4000, 14000));

	}
	return maQuete;
}
#pragma once
#include <string>
#include <iostream>
class Quete
{
public:
	enum class Difficulte
	{
		Facile,
		Moyen,
		Difficile
	};

	std::string nom;
	Difficulte nivDifficulte;
	int nivMin;
	int recompenseOr;
	int expRecu;

	Quete();
	Quete(std::string nomQ, Difficulte dif, int niv,int rec,int exp ); 
	~Quete();

	Difficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	std::string to_string();


};


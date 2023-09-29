#include "Quete.h"

Quete::Quete()
{
	 nom = "";
	 nivDifficulte = Difficulte::Facile ;
	 nivMin = 0;
	 recompenseOr = 0;
	 expRecu = 0;

}
Quete::Quete(std::string nomQ, Difficulte dif, int niv, int rec, int exp)
{
	nom = nomQ;
	nivDifficulte = dif;
	nivMin = niv;
	recompenseOr = rec;
	expRecu = exp;
}

Quete::~Quete()
{

}

Quete::Difficulte Quete::getDifficulte()
{
	return nivDifficulte;
}

int Quete::getNivMin()
{
	return nivMin;
}
int Quete::getRecompense()
{
	return recompenseOr;
}
int Quete::getExp()
{
	return expRecu;
}

std::string Quete::to_string()
{
	std::string info ;
	std::string nivD;
	Difficulte diff = getDifficulte();
	if (diff == Difficulte::Facile) 
	{
		nivD = "Facile";
	}
	else if (diff == Difficulte::Moyen)
	{
		nivD = "Moyen";
	}
	else
	{
		nivD = "Difficile";
	}
	info.append("Nom de la quete: " + nom + "\n");
	info.append("Niveau de difficulte de la quete: " + nivD + "\n");
	info.append("Niveau minimum de la quete: " +std::to_string(this->getNivMin()) + "\n");
	info.append("Recompense Or de la quete: " +std::to_string(this->getRecompense()) + "\n");
	info.append("Experience recu de la quete: " +std::to_string(this->getExp()) + "\n");


	return info;
}
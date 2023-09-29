#include "Aventurier.h"

Aventurier::Aventurier()
{
	niveau = 22;

}

Aventurier::Aventurier(int niv, std::vector<Quete*> tbQ)
{
	niveau = niv;
	tabQuete = tbQ;

}
Aventurier::~Aventurier()
{

}

void Aventurier::afficherQuete()
{
	for (int i = 0; i < tabQuete.size(); i++)
	{
		std::cout << tabQuete[i]->to_string() << std::endl;
	}

}

void Aventurier::ajouterQuete(Quete* quete)
{
	tabQuete.push_back(quete);
}

int Aventurier::getNiv()
{
	return niveau;
}
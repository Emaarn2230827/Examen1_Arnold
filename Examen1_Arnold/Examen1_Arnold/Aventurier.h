#pragma once
#include "Quete.h"
#include <vector>
class Aventurier
{
public:
	int niveau;
	std::vector<Quete*> tabQuete;

	Aventurier();
	Aventurier(int niv, std::vector<Quete*> tbQ);
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();
};


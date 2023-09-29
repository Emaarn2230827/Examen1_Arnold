#include <iostream>
#include<ctime>
#include "FactoryQuete.h"
#include "Quete.h"
#include "Aventurier.h"
#include <vector>

int main()
{
    srand(time(NULL));
    Quete* maQuete = FactoryQuete::getRandomQuete();
    std::cout << maQuete->to_string();
    delete maQuete;
    Aventurier monAv;
    for (int i=0;i<12;i++)
    {
        Quete* laQuete = FactoryQuete::getRandomQuete();
        if (monAv.getNiv() >= laQuete->getNivMin())
        {
            monAv.ajouterQuete(laQuete);
        }
        else
        {
            delete laQuete;
        }
           
    }
    std::cout << "----------------------- LISTE DES QUETES DE MON AVENTURIER DE NIVEAU "<< monAv.getNiv() <<" ----------------------- " <<std::endl;
    monAv.afficherQuete();
    
}

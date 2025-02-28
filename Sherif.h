#pragma once
#include "Cowboy.h"
class Brigand;
class Sherif :
	public Cowboy
{
private:

	int nbBrigandsCapturer;

public:

	Sherif(const string nom = "", const string boissonFavortite = "eau", const string qualite = "honnete", const int nbBrigrandsCapturer = 0);

	int getNbBrigandsCapturer();
	string getNom();
	void sePresente();
	
	void recherche(Brigand& brigand);
};


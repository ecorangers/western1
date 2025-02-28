#include "Sherif.h"
#include <iostream>


Sherif::Sherif(const string nom, const string boissonFavortite, const string qualite, const int nbBrigrandsCapturer) : Cowboy(nom, boissonFavorite), nbBrigandsCapturer(0)
{
}

int Sherif::getNbBrigandsCapturer()
{
	return nbBrigandsCapturer;
}

string Sherif::getNom()
{
	return "Sherif" + nom;
}

void Sherif::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getQualite() << " et j' aime le " << getBoissonFavorite() << ". J ai capturer " << getNbBrigandsCapturer() << "." << endl;
}

void Sherif::recherche(Brigand& brigand)
{
}

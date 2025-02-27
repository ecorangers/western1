#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"
#include <iostream>
using namespace std;

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement) : Humain(nom, boissonFavorite), comportement(comportement), nbDamesEnlever(0), recompense(0), enPrison(false)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlever()
{
	return nbDamesEnlever;
}

int Brigand::getRecompense()
{
	return recompense;
}

void Brigand::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j' aime le " << getBoissonFavorite() << "." << endl;
}

void Brigand::kidnappe(Dame &dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnlever++;
		augmenteRecompense();
		cout << "(" << nom << ") --" << "Ah ah ! " << dame.getNom() << ", tu es mienne desormais ! " << endl;
	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Dammed, je suis fait ! " << cowboy.getNom() << " tu m' as eu !" << endl;

	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}

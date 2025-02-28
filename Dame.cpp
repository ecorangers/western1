#include "Dame.h"
#include "Brigand.h"
#include "Cowboy.h"
#include <iostream>

using namespace std;

void Dame::hurle()
{
	cout << "** " << nom << " hurle " << endl;
	cout << "(" << nom << ") -- Au secours, je me fais kidnapper ! " << endl;
}

void Dame::remercie(Cowboy& cowboy)
{
	cout << "(" << nom << ") -- Merci " << cowboy.getNom() << ", je suis enfin libre ! " << endl;
}

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe) : Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")
{
}

string Dame::getNom()
{
	return "Miss " + nom;
}

string Dame::getEtat()
{
	return etat;
}

string Dame::getCouleurRobe()
{
	return couleurRobe;
}

void Dame::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << getCouleurRobe() << "." << endl;
}

void Dame::seFaitKidnapper()
{
	hurle();
	etat = "kidnappee";
}

void Dame::seFaitLiberer(Cowboy& cowboy)
{
	remercie(cowboy);
	etat = "libre";
}

void Dame::changeDeRobe(string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") -- Regardez ma nouvelle robe " << couleurRobe << " ! " << endl;
}
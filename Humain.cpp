#include "Humain.h"
#include <iostream>
using namespace std;

string Humain::getNom()
{
	return nom;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

void Humain::sePresente()
{
	cout << "(" << nom << ") -- Bonjour , je suis " << nom << " et j aime le " << boissonFavorite << endl;
}

void Humain::parle(const string texte)
{
	cout << "(" << nom << ") -- " << texte << endl;
}

void Humain::boit()
{
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " GLOUPS ! " << endl;
}

Humain::Humain(string nom, string boissonFavorite):nom(nom), boissonFavorite(boissonFavorite)
{
}

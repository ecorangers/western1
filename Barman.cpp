#include "Barman.h"
#include <iostream>

string Barman::terminePhrase()
{
	return " mon gars.";
}

Barman::Barman(const string nom, const string boissonFavorite, const string nomBar) : Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::parle(const string texte)
{
	cout << "(" << nom << ") -- " << texte << terminePhrase() << endl;
}

void Barman::sePresente()
{
	cout << "(" << nom << ") -- Bonjour , je suis " << nom << " le baraman du " << nomBar << " et j aime la " << boissonFavorite << terminePhrase() << endl;
}

void Barman::sert(Humain& humain)
{
	cout << "(" << nom << ") -- Tient " << humain.getNom() << " un verre de " << humain.getBoissonFavorite() << terminePhrase() << endl;
}

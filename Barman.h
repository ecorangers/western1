#pragma once
#include "Humain.h"
class Barman :
	public Humain
{
private:
	string nomBar;
	string terminePhrase();
public:

	Barman(const string nom = "", const string boissonFavorite = "biere", const string nomBar = "Saloon");
	
	string getNomBar();

	void parle(const string texte);
	void sePresente();
	void sert(Humain &humain);
};


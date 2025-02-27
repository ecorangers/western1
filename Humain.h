#pragma once
#include <string>
using namespace std;
class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	Humain(const string nom = "", const string boissonFavorite = "eau");
	string getNom();
	string getBoissonFavorite();
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	void sePresente();
	void parle(const string texte);
	void boit();
	
};


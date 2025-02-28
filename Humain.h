#pragma once
#include <string>
using namespace std;
class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	//Constructeur et Destructeur
	Humain(const string nom = "", const string boissonFavorite = "eau");
	//Accesseurs
	string getNom();
	string getBoissonFavorite();
	//Service
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	virtual void sePresente();
	void parle(const string texte);
	void boit();

};

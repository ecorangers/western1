#pragma once
#include "Humain.h"
using namespace std;
class Dame;
class Cowboy;
class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnlever;
	int recompense;
	bool enPrison;

public:
	//Constructeur et Destructeur
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = "mechant");
	//Accesseurs
	string getComportement();
	int getNbDamesEnlever();
	int getRecompense();
	//Service
	void sePresente();
	void kidnappe(Dame & dame);
	void seFaitEmprisonner(Cowboy &cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison();

};


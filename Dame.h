#pragma once
#include "Humain.h"
using namespace std;
class Cowboy;
class Dame :
	public Humain
{
private:
	string couleurRobe;
	string etat;
	void hurle();
	void remercie(Cowboy &cowboy);
public:
	Dame(const string nom = "", const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	string getNom();
	string getEtat();
	string getCouleurRobe();
	void sePresente();
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy & cowboy);
	void changeDeRobe(const string couleurRobe);
};


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
	void remercie(Cowboy& cowboy);
public:
	//Constructeur et Destructeur
	Dame(const string nom = "", const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	//Accesseurs
	string getNom();
	string getEtat();
	string getCouleurRobe();
	//Service
	void sePresente();
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);
	void changeDeRobe(const string couleurRobe);
};
#pragma once
#include "Humain.h"
using namespace std;
class Dame;
class Brigand;
class Cowboy :
	public Humain
{
private:
	int popularite = 0;
	string qualite;
public:
	//Constructeur et Destructeur
	Cowboy(const string nom = "", const string boissonFavorite = "whisky", const string qualite = "vaillant");
	//Accesseurs
	int getPopularite();
	string getQualite();
	//Service
	void setQualite(const string qualite);
	void sePresente();
	void setPopularite(const int poularite);
	void incrementePoluplarite();
	void decrementePopularite();
	void tire(const Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
};


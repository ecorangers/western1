#pragma once
#include "Humain.h"
#include "Brigand.h"
#include "Dame.h"
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
	Cowboy(const string nom = "", const string boissonFavorite = "whisky", const string qualite = "vaillant");
	int getPopularite();
	void setPopularite(const int poularite);
	string getQualite();
	void setQualite(const string qualite);
	void sePresente();
	void incrementePoluplarite();
	void decrementePopularite();
	void tire(const Brigand & brigand);
	void emprisonne(Brigand & brigand);
	void libere(Dame& dame);
};


#pragma once
#include <string>
using namespace std;
class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	string getNom();
	string getBoissonFavorite();
	Humain(string nom, string boissonFavorite);
};


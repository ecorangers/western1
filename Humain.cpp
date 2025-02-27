#include "Humain.h"
using namespace std;

string Humain::getNom()
{
	return nom;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}

Humain::Humain(string nom, string boissonFavorite):nom(nom), boissonFavorite(boissonFavorite)
{
}

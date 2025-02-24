#include "Cowboy.h"
#include <iostream>
#include "Brigand.cpp"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string qualite)
{

}

int Cowboy::getPopularite()
{
	return popularite;
}

void Cowboy::setPopularite(const int _popularite)
{
	popularite = _popularite;
}

string Cowboy::getQualite()
{
	return qualite;
}

void Cowboy::setQualite(string _qualite)
{
	qualite = _qualite;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getQualite() << " et j' aime le " << getBoissonFavorite() << "." << endl;
}

void Cowboy::incrementePoluplarite()
{
	popularite++;
}

void Cowboy::decrementePopularite()
{
	popularite--;
}

void Cowboy::tire(const Brigand& brigand)
{
	cout << "** Le " << getQualite << " " << nom << " tire " << endl;
	cout << "(" << nom << ") -- Prends ca rascal ! " << endl;
}

void Cowboy::emprisonne(Brigand& brigand)
{
	brigand.seFaitEmprisonner(*this);
}

void Cowboy::libere(Dame& dame)
{
	dame.seFaitLiberer(*this);
}

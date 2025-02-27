// western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Cowboy.h"
#include "Brigand.h"
#include "Dame.h"
#include <iostream>
using namespace std;


int main()
{
	Cowboy lucky("Luky & Luke", "coca-cola");
	Brigand joe("Joe");
	Dame jenny("Jenny");

	lucky.sePresente();
	jenny.sePresente();

	joe.sePresente();
	joe.kidnappe(jenny);

	cout <<"("<< joe.getNom() << ") -- J'ai l'air " << joe.getComportement() <<" , j' ai deja enlever " << joe.getNbDamesEnlever() << " dames , et ma prime est de " << joe.getRecompense() << endl;
	lucky.tire(joe);
	lucky.emprisonne(joe);
	lucky.libere(jenny);
	//terminer//
}
// western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.//

#include "Humain.h"
#include "Cowboy.h"
#include "Brigand.h"
#include "Dame.h"
#include <iostream>
using namespace std;

int main()
{
	Cowboy lucky("Luky & Luke");
	Dame jenny("Jenny");
	//La rencontre ...
	lucky.sePresente();
	jenny.sePresente();
	//Allons boire un coup ...
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
}
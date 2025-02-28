// western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.//
//heritage//
#include "Humain.h"
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


}


// western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.//
//heritage//
#include "Humain.h"
#include "Cowboy.h"
#include "Brigand.h"
#include "Dame.h"
#include "Barman.h"
#include <iostream>
using namespace std;

void presentezVous(Humain &humain)
{
	humain.sePresente();
}

int main()
{
	Cowboy lucky("Luky & Luke", "coca-cola");
	Brigand joe("Joe");
	Dame jenny("Jenny");
	Barman robert("Robert");

	// 1. Les présentations des personnages

	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);

	// 2. Service des boissons

	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);

}


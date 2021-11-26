// Codé par Thibault Leclair --- 25/11/2021
#include <iostream>
#include <stdlib.h>
using namespace std;

string version = "1.0-win64";

void Clear()
{
	system("cls");
}

void displaymenu()
{
	Clear();
	cout << "===============================\n";
	cout << "MENU PRINCIPAL\n";
	cout << "===============================\n";
	cout << "\n\n";
	cout << "1.Fréquence de rotation\n";
	cout << "2.Vitesse d'avance\n";
	cout << "3.Rappel des formules\n";
	cout << "8.À propos\n";
	cout << "9.Quitter.\n";
	cout << "\n\n";
}

void Wait()
{
	system("pause");
}

void freqRotation()
{
	Clear();
	double Vc = 0;
	double D = 0;
	double N = 0;
	cout << "Saisissez une vitesse de coupe (m/min): ";
	cin >> Vc;
	cout << "\n";
	cout << "Saisissez un diamètre d'outil (mm): ";
	cin >> D;
	N = (1000 * Vc) / (3.1415 * D);
	cout << "La fréquence de rotation est de " << N << " tr/min.\n";
	Wait();
}

void vitAvance()
{
	Clear();
	int z = 1;
	double N = 0;
	double Vf = 0;
	double f = 0;
	cout << "Fréquence de rotation de l'outil (tr/min): ";
	cin >> N;
	cout << "\nAvance (mm/tr/dent): ";
	cin >> f;
	cout << "\nNombre de dents: ";
	cin >> z;
	Vf = N * f * z;
	cout << "\nLa vitesse d'avance est de " << Vf << " mm/tr.\n";
	Wait();
}

void rappelFormules()
{
	Clear();
	cout << "Fréquence de rotation:\n";
	cout << "N = (1000 * Vc) / (pi * D)\n";
	cout << "N [tr/min] -- Vc [m/min] -- D [mm]\n\n";
	cout << "Vitesse d'avance: \n";
	cout << "Vf = N * f * Z\n";
	cout << "Vf [mm/tr] -- N [tr/min] -- f [mm/tr/dent] -- Z [nb dents]\n\n";
	Wait();
}

void infos()
{
	Clear();
	cout << "Programme conçu par Thibault Leclair\nthibault.leclair@etu.univ-poitiers.fr\n\nVersion: " << version << "\n\n";
	cout << "NOTES DE VERSION:\n";
	cout << "- 1.0: Version initiale\n\n";
	Wait();
}

int main()
{
    system("chcp 65001");
	int i = 0;
	while (i == 0)
	{
		displaymenu();
		int yourchoice;
		cout<<"Faites votre choix: ";
		cin>>yourchoice;
		switch (yourchoice)
		{
			case 1: freqRotation(); break;
			case 2: vitAvance();break;
			case 3: rappelFormules();break;
			case 8: infos();break;
			case 9: exit(EXIT_SUCCESS);break;
			default: cout<<"Erreur: vous n'avez pas choisi une valeur parmi celles proposées.\n"; break;
		}
	}
}

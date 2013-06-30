/*
 * main.cpp
 *
 *  Created on: Jun 23, 2013
 *      Author: Mardaloescu
 */
#include <iostream>
#include <string.h>
#include "persoana.h"
#include "baza.h"
using namespace std;

int main() {
	int no_persona;
	int operatie;
	int nouaOperatie;

/*	Persoana *gica = new Persoana();
	Persoana *ilie = new Persoana();
	Persoana *enache = new Persoana();
	Persoana *bianca = new Persoana();
//	Persoana *auxiliara = new Persoana();
	char *sirGica = new char[5];
	strcpy(sirGica, "Gica");
	char *sirIlie = new char[5];
	strcpy(sirIlie, "Ilie");
	char *sirNache = new char[7];
	strcpy(sirNache, "Enache");
	char *sirBianca = new char[8];
	strcpy(sirBianca, "Bianca");

	gica->nPersoana(sirGica);
	gica->yPersoana(1992);
	gica->sPersoana('M');

	ilie->nPersoana(sirIlie);
	ilie->yPersoana(1991);
	ilie->sPersoana('M');

	enache->nPersoana(sirNache);
	enache->yPersoana(1990);
	enache->sPersoana('M');

	bianca->nPersoana(sirBianca);
	bianca->yPersoana(1993);
	bianca->sPersoana('F');
*/

	cout << "Introduceti numarul de persoane din baza de date: ";
	cin >> no_persona;
	Baza *baza = new Baza(no_persona);

	cout << "Alegeti ce operatie doriti sa efectuati asupra bazei de date: " << endl;
	cout << "	1.Introduceti o persoana noua in baza de date" << endl;
	cout << "	2.Stergeti o persoana din baza de date dupa criteriul - nume" << endl;
	cout << "	3.Stergeti o persoana din baza de date dupa criteriul - anul nasterii" << endl;
	cout << "	4.Stergeti o persoana din baza de date dupa criteriul - sex" << endl;
	cout << "	5.Afisati persoanele din baza de date in ORDINE ALFABETICA A NUMELOR" << endl;
	cout << "	6.Afisati persoanele din baza de date in ORDINE CRESCATOARE A VARSTELOR" << endl;
	cout << "	7.Iesiti din meniu" << endl;
	cin >> operatie;
	while(operatie < 8) {
		switch(operatie) {
			case 1:
			{
				Persoana *noua = new Persoana();
				char *nume = new char[20];
				int an;
				char sex;
				cout << "Introduceti numele persoanei: " << endl;
					cin >> nume;
					noua->nPersoana(nume);
				cout << "Introduceti anul nasterii persoanei: " << endl;
					cin >> an;
					noua->yPersoana(an);
				cout << "Introduceti sexul persoanei: " << endl;
					cin >> sex;
					noua->sPersoana(sex);
				baza->addPersona(noua);
			}
				break;
			case 2:
			{
				char *numeDeSters = new char[20];
				cout << "Introduceti numele persoanei ce-o doriti stearsa din baza de date " << endl;
				cin >> numeDeSters;
				baza->erasePersona(numeDeSters);
			}
				break;
			case 3:
			{
				int an;
				cout << "Introduceti anul de nastere al persoanei ce-o doriti stearsa din baza de date " << endl;
				cin >> an;
				baza->erasePersona(an);
			}
				break;
			case 4:
			{
				char sex;
				cout << "Introduceti sexul persoanei ce-o doriti stearsa din baza de date " << endl;
				cin >> sex;
				baza->erasePersona(sex);
			}
				break;
			case 5:
				if(!baza->isEmpty()) {
					baza->printAscendingByName();
					break;
				} else {
					goto emergencyExit;
				}
			case 6:
				if(!baza->isEmpty()) {
					baza->printAscendingByName();
					break;
				} else {
					goto emergencyExit;
				}
			default:
				goto exit2;
		} //End of Switch Statement

		cout << "Doriti sa introduceti o noua operatie ?" << endl;
		cout << "	1.Da" << endl;
		cout << "	2.Nu" << endl;
		cin >> nouaOperatie;

		switch(nouaOperatie) {
		case 1:
			cout << "Alegeti ce noua operatie doriti sa efectuati asupra bazei de date: " << endl;
			cin >> operatie;
			break;
		default:
			goto exit;
		}
	exit:
		if(nouaOperatie != 1)
			break;
	exit2:
		if(operatie == 7)
			break;
	emergencyExit:
		break;
	}

	return 0;
}

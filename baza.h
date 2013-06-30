/*
 * baza.h
 *
 *  Created on: Jun 23, 2013
 *      Author: Mardaloescu
 */

#ifndef BAZA_H_
#define BAZA_H_
#include "persoana.h"

using namespace std;

class Baza : public Persoana {
private:
	int no_persona;
	Persoana **v;
	int counter;

public:
	Baza(int no_persona);
	~Baza();
	void addPersona(Persoana *p);
	void erasePersona(char* name);
	void erasePersona(int birthYear);
	void erasePersona(char sex);
	void sortAscendingByYear();
	void printAscendingByYear();
	void sortAscendingByName();
	void printAscendingByName();
	bool isEmpty();
};




#endif /* BAZA_H_ */

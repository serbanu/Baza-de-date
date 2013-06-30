/*
 * baza.cpp
 *
 *  Created on: Jun 23, 2013
 *      Author: Mardaloescu
 */
#include <iostream>
#include <algorithm>
#include <string.h>
#include "baza.h"
using namespace std;

Baza::Baza(int no_persona) {
	this->no_persona = no_persona;
	this->counter = 0;
	v = new Persoana*[this->no_persona];
	for(int i = 0; i < this->no_persona; i++) {
		v[i] = new Persoana;
		v[i] = NULL;
	}
}

Baza::~Baza() {
	for(int i = 0; i < this->no_persona; i++) {
		delete[] v[i];
		delete[] v;
	}
}

void Baza::addPersona(Persoana *p) {
	v[this->counter] = p;
	this->counter++;
}

void Baza::erasePersona(char* name) {
	int k = 0;
	for(int i = 0; i < this->no_persona; i++) {
		if(strcmp(v[i]->nume(),name) == 0) {
			v[i] = v[i + 1];
			v[i + 1] = v[i + 2];
			this->counter --;
			k++;
		}
	}
	this->no_persona -= k;
}

void Baza::erasePersona(int birthYear) {
	int k = 0;
	for(int i = 0; i < this->no_persona; i++) {
		if(v[i]->birth() == birthYear) {
			v[i] = v[i + 1];
			v[i + 1] = v[i + 2];
			this->counter --;
			k++;
		}
	}
	this->no_persona -= k;
}

void Baza::erasePersona(char sex) {
	int k = 0;
	for(int i = 0; i < this->no_persona; i++) {
		if((v[i]->sexul() - '\0') == (sex - '\0')) {
			v[i] = v[i + 1];
			v[i + 1] = v[i + 2];
			this->counter --;
			k++;
		}
	}
	this->no_persona -= k;
}

void Baza::sortAscendingByYear() {
	for(int i = 0; i < this->no_persona; i++) {
		for(int j = i + 1; j < this->no_persona; j++) {
			if(v[i]->birth() > v[j]->birth()) {
				swap(v[i], v[j]);
			}
		}
	}
}

void Baza::printAscendingByYear() {
	sortAscendingByYear();
	int k = 0;
	for(int i = 0; i < this->no_persona; i++) {
		cout << v[i]->birth() << " ";
		if(v[i] == NULL) {
			k++;
		}
	}
	if(this->no_persona == k) {
		cout << "Baza de date nu contine nicio inregistrare";
	}
	cout << endl;
}

void Baza::sortAscendingByName() {
	for(int i = 0; i < no_persona - 1; i++) {
		for(int j = i + 1; j < no_persona; j++) {
			if(strcmp(v[i]->nume(), v[j]->nume()) > 0) {
				swap(v[i], v[j]);
			}
		}
	}
}

void Baza::printAscendingByName() {
	sortAscendingByName();
	int k = 0;
	for(int i = 0; i < this->no_persona; i++) {
		cout << v[i][0].nume() << " ";
		if(v[i] == NULL) {
					k++;
		}
	}
	if(this->no_persona == k) {
		cout << "Baza de date nu contine nicio inregistrare";
	}
	cout << endl;
}

bool Baza::isEmpty() {
	return this->counter == 0;
}

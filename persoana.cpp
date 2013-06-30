/*
 * persoana.cpp
 *
 *  Created on: Jun 23, 2013
 *      Author: Mardaloescu
 */
#include <string.h>
#include "persoana.h"


Persoana::Persoana() {
	this->name = " ";
	this->birthYear = 0;
	this->sex = ' ';
}

Persoana::~Persoana() {}

void Persoana::nPersoana(char* name) {
	this->name = name;
}

void Persoana::yPersoana(int birthYear) {
	this->birthYear = birthYear;
}

void Persoana::sPersoana(char sex) {
	this->sex = sex;
}

char* Persoana::getPersona(char* name) {
	return this->name;
}

int Persoana::getPersona(int birthYear) {
	return this->birthYear;
}

char Persoana::getPersona(char sex) {
	return this->sex;
}

char* Persoana::nume() {
	return this->name;
}


int Persoana::birth() {
	return this->birthYear;
}

char Persoana::sexul() {
	return this->sex;
}


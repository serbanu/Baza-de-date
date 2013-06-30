/*
 * persoana.h
 *
 *  Created on: Jun 23, 2013
 *      Author: Mardaloescu
 */
#ifndef PERSOANA_H_
#define PERSOANA_H_

class Persoana {
private:
	char* name;
	int birthYear;
	char sex;

public:
	Persoana();
	~Persoana();
	void nPersoana(char* name);
	void yPersoana(int birthYear);
	void sPersoana(char sex);
	char* getPersona(char* name);
	int getPersona(int birthYear);
	char getPersona(char sex);
	char* nume();
	int birth();
	char sexul();
};


#endif /* PERSOANA_H_ */

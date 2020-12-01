//============================================================================
// Name        : 26.cpp
// Author      : vishnukumar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Alphabet {

private:
	char name;

public:
	Alphabet() {
		name = 'a';
		cout << "Constructor called" << endl;
	}

	~Alphabet() {
		cout << "Destructor called"<< endl;
	}

	void setName(char newChar) {
		name = newChar;
	}

	void printChar() {
		cout << name << ", " << flush;
	}
};

int main() {

	char start = 'a';

	Alphabet *pAlphabets = new Alphabet[26];

	for(int i = 0; i < 26 ; i++) {
		pAlphabets[i].setName(start + i);
		pAlphabets[i].printChar();
	}

	delete [] pAlphabets;

	return 0;
}

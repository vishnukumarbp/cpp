//============================================================================
// Name        : Pointers.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {


	string texts[] = { "one", "two", "three"};


	string *pTexts = texts;

	cout << pTexts << endl;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << " ";
	}

	cout << endl;


	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << pTexts[i] << " ";
	}

	cout << endl;


	for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++){
		cout << *pTexts << " ";
	}

	cout << endl;


	string *pFirstElement = &texts[0];
	string *pLastElement = &texts[2];


	while(pFirstElement != pLastElement){
		cout <<  *pFirstElement << " ";
		pFirstElement++;
	}




	return 0;
}

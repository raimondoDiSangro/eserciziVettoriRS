//============================================================================
// Name        : esercizio2maggio.cpp
// Author      : Vincenzo Martemucci
// Version     :
// Copyright   : Free
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int vett1[5];
	int vett2[5];
	cout << "Caricamento primo vettore " << endl;
		for (int i = 0; i < 5; i ++){
			cout << "Inserire " << i+1 << "' elemento del vettore " << endl;
			cin >> vett1[i];
		}

		for (int i = 0; i < 5; i ++){
			if (i % 2 == 0){
				vett2[i] = vett1[i] * 20;
			}
			if (i % 2 != 0){
				vett2[i] = vett1[i] * 10;
			}
		}

		cout << "Stampa primo vettore " << endl;
			for (int i = 0; i < 5; i++){
				cout << vett1[i] << " ";
			}
		cout << endl;

		cout << "Stampa secondo vettore " << endl;
			for (int i = 0; i < 5; i++){
				cout << vett2[i] << " ";
			}
		cout << endl;


	cout << "" << endl; // prints 
	return 0;
}

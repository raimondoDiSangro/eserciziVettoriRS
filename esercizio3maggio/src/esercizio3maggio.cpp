//============================================================================
// Name        : esercizio3maggio.cpp
// Author      : Vincenzo 
// Version     :
// Copyright   : Free
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int vett[10];
	int somma = 0;
	int prodotto = 1;
	int risultato;
	cout << "Caricamento  vettore " << endl;
	for (int i = 0; i < 10; i ++){
			cout << "Inserire " << i+1 << "' elemento del vettore " << endl;
				cin >> vett[i];
			}

	for (int i = 0; i < 5; i ++){
		somma = somma + vett[i];
	}

	for (int i = 5; i < 10; i++){
		prodotto = prodotto * vett[i];
	}

	risultato = somma * prodotto;

	cout << "Risultato finale: " << risultato << endl;


	cout << "" << endl; // prints 
	return 0;
}

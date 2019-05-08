//============================================================================
// Name        : esercizio1maggio.cpp
// Author      : Vincenzo 
// Version     :
// Copyright   : Free
// Description : 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int vett1[5];
	int vett2[5];
	int vett3[10];

	cout << "Caricamento primo vettore " << endl;
	for (int i = 0; i < 5; i ++){
		cout << "Inserire " << i+1 << "' elemento del vettore " << endl;
		cin >> vett1[i];
	}
	cout << "Caricamento secondo vettore " << endl;
	for (int i = 0; i < 5; i ++){
			cout << "Inserire " << i+1 << "' elemento del vettore " << endl;
			cin >> vett2[i];
		}


	for (int i = 0; i < 10; i++){
		if (i % 2 == 0){
			vett3[i] = vett1[i/2];
		}
		if (i % 2 != 0){
			vett3[i] = vett2[i/2];
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

	cout << "Stampa terzo vettore " << endl;
		for (int i = 0; i < 10; i++){
			cout << vett3[i] << " ";
		}
	cout << endl;





	return 0;
}

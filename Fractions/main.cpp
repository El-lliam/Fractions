#include<iostream>
#include<string>
#include<fstream>
#include "Fraction.h"
#include"FractionHandler.h"
#include<vector>
using namespace std;

int main() {

	ifstream file("liste.txt");

	FractionHandler chargeur1;
	FractionHandler chargeur2;
	FractionHandler chargeur3;

	chargeur1.setSuivant(&chargeur2);
	chargeur2.setSuivant(&chargeur3);

	vector<Fraction> fractions;

	string line;
	while (getline(file, line)) {
		

	}

	cout << "(";
	for (int i = 0; i < fractions.size(); i++)
	{
		if (i != fractions.size() - 1)
			cout << fractions[i] << ", ";
		else
			cout << fractions[i];
	}
	cout << ")" << endl;

	return 0;
}
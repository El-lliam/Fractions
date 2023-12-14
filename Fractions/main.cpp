#include<iostream>
#include<string>
#include<fstream>
#include"ChargeurListeFraction.h"
using namespace std;

int main() {

	ifstream file("liste.txt");

	ChargeurListeFraction chargeurStandard;
	chargeurStandard.setSuivant(&chargeurStandard);
	vector<Fraction> fractions = chargeurStandard.charge(file);

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
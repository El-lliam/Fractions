#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "Fraction.h"
class ChargeurListeFraction {

private:
	ChargeurListeFraction* suivante;
public:
	ChargeurListeFraction() {
		suivante = NULL;
	}
	void setSuivant(ChargeurListeFraction* nouveauSuivant) {
		suivante = nouveauSuivant;
	}
	ChargeurListeFraction* getSuivant()const {
		return suivante;
	}
	vector<Fraction> charge(ifstream& file);
};
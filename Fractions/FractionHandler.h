#pragma once
#include "Fraction.h"
using namespace std;

class FractionHandler {
public:
	virtual ~FractionHandler() = default;

	virtual vector<Fraction> handle(ifstream& file);

	void setSuivant(FractionHandler* nextHandler) {
		this->nextHandler = nextHandler;
	}
protected:
	FractionHandler* nextHandler = nullptr;
};
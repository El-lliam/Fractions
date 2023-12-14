#include "ChargeurListeFraction.h"
#include<vector>
#include"Fraction.h"
#include"Fraction.cpp"
#include<iostream>
#include<fstream>

using namespace std;


vector<Fraction>ChargeurListeFraction::charge(ifstream& file) {
		vector<Fraction> fractions;
		string ligne;
		int num, den;
		while (getline(file,ligne)) {
			int pos = 0;
			int pos1 = ligne.find('%', pos);
			int pos2 = ligne.find(',',pos);
			int pos3 = ligne.find('/',pos);
			if (pos1 == string::npos && pos2 == string::npos && pos3 == string::npos)
			{			//如果一个都没有，那么直接读取下一行，其余情况不在考虑范围内
				continue;
			}
			
			if (pos1 != string::npos) {
				num = stoi(ligne.substr(pos,pos1-pos));
				fractions.push_back(Fraction(num, 100));
			}
			else if (pos2 != string::npos) {
				pos++;
				num = stoi(ligne.substr(pos, pos2-pos));
				pos = pos2 + 1;
				den = stoi(ligne.substr(pos));
			}
			else if (pos3 != string::npos) {
				num = stoi(ligne.substr(pos, pos3 - pos));
				pos = pos3 + 1;
				den = stoi(ligne.substr(pos));
			}

		}
		return fractions;
	}

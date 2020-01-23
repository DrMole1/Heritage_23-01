#pragma once
#include <iostream>
#include <string>
#include "CPoint.h"

using namespace std;

class CPointCoul : public CPoint{


	// Seules les variables spécifiques à la classe enfant sont déclarées
private:

	string color;

public:

	// Constructeur sans paramètre
	CPointCoul::CPointCoul(void) : CPoint() {

		this->color = "green";
	}

	// Constructeur avec paramètres
	CPointCoul::CPointCoul(float x, float y, string myColor) : CPoint(x, y) {

		this->color = myColor;
	}

	// Fonction d'affichage
	void CPointCoul::afficher() {
		cout << CPoint::m_fltX << endl;
		cout << CPoint::m_fltY << endl;
		cout << color << endl;
		cout << endl;
	}
	
};

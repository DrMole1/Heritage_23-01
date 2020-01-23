//================================================
// Fichier : CPoint.h
// Classe : CPoint
// Description : Classe servant � mod�liser un point dans un plan
// Attributs : r�els X et Y, int static Nb

// Auteur : Prob Bastien
// 25/11/2019 : Cr�ation
//================================================

#pragma once

typedef enum eCouleur{rouge, vert, bleu}eCouleur;
//constrcuteur avec parametre, sans parametre et afficher point

class CPoint
{
protected:
	float m_fltX;
	float m_fltY;
	static int m_nPoint;

public:
	CPoint();
	CPoint(float x, float y);
	const float getX();
	const float getY();

	//M�thode static :
	static int compte();

};
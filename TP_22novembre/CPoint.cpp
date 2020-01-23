//==========================================
// Fichier : CPoint.cpp
// Classe : CPoint

// Auteur : Prob Bastien
// 25/11/2019 : Création 
//==========================================


#include "CPoint.h"
int CPoint::m_nPoint = 0;


CPoint::CPoint()
{
	this->m_fltX = 0.0f;
	this->m_fltY = 0.0f;

	m_nPoint++;
}

CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;

	m_nPoint++;
}

const float CPoint::getX()
{
	return m_fltX;
}

const float CPoint::getY()
{
	return m_fltY;
}

int CPoint::compte()
{
	return m_nPoint;
}

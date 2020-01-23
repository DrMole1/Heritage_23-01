//==========================================
// Fichier : CVecteur3D.cpp
// Classe : CVecteur3D

// Auteur : Prob Bastien
// 22/11/2019 : Date de cr�ation
// 25/11/2019 : Ajout des m�thodes Afficher, Somme et ProduitScalaire
//==========================================


#include "CVecteur3D.h"
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;


//==================================================================================
// Constructeurs

// BUT : Cr�er un vecteur 3D initialis� � 0 sur tous les axes.
// ENTREES : /
// SORTIES : Le vecteur 3D initialis� � 0.
CVecteur3D::CVecteur3D()
{
	this->m_fltX = 0.0f;
	this->m_fltY = 0.0f;
	this->m_fltZ = 0.0f;
}


// BUT : Cr�er un vecteur 3D dont les valeurs des axes sont pass�s en param�tre.
// ENTREES : Les 3 r�els.
// SORTIES : Le vecteur 3D initialis� avec les 3 r�els.
CVecteur3D::CVecteur3D(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}


// BUT : Cr�er un vecteur 3D dont chaque axe poss�de la m�me valeur.
// ENTREES : Un r�el.
// SORTIES : Le vecteur 3D initialis� avec le r�el.
// NOTE : Constructeur inline
CVecteur3D::CVecteur3D(float fltValeur) { this->m_fltX = fltValeur; this->m_fltY = fltValeur; this->m_fltZ = fltValeur;}


//=================================================================================

//=================================================================================

//Accesseurs des attributs


// BUT : getter de l'attribut X
// ENTREES : /
// SORTIES : La valeur de l'attribut X
float const CVecteur3D::getX()
{
	return m_fltX;
}


// BUT : getter de l'attribut Y
// ENTREES : /
// SORTIES : La valeur de l'attribut Y
float const CVecteur3D::getY()
{
	return m_fltY;
}


// BUT : getter de l'attribut Z
// ENTREES : /
// SORTIES : La valeur de l'attribut Z
float const CVecteur3D::getZ()
{
	return m_fltZ;
}


// BUT : Afficher les attributs membres de l'instance
// ENTREES : /
// SORTIES : Les valeurs X Y et Z
const void CVecteur3D::Affichage()
{
	cout << " X : " << m_fltX << ", Y : " << m_fltY << ", Z : " << m_fltZ << endl;
}


// BUT : Calculer la somme de deux vecteurs
// ENTREES : Un autre vecteur
// SORTIES : La somme du vecteur, de type vecteur, par relation de Chasles
CVecteur3D CVecteur3D::SommeVecteur(const CVecteur3D vecteur)
{
	CVecteur3D vecteurTemp;
	vecteurTemp.m_fltX = this->m_fltX + vecteur.m_fltX;
	vecteurTemp.m_fltY = this->m_fltY + vecteur.m_fltY;
	vecteurTemp.m_fltZ = this->m_fltZ + vecteur.m_fltZ;
	return vecteurTemp;
}


// BUT : Calculer le produit scalaire de 2 vecteurs
// ENTREES : Un autre vecteur
// SORTIES : Un Float, produit scalaire
float CVecteur3D::ProduitScalaire(const CVecteur3D vecteur)
{
	return ((this->m_fltX * vecteur.m_fltX) + (this->m_fltY * vecteur.m_fltY) + (this->m_fltZ * vecteur.m_fltZ));
}



//=================================================================================
/*
// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
bool CVecteur3D::CoinciderVecteur(const CVecteur3D Vecteur) const
{
	return ((Vecteur.m_fltX == this->m_fltX) && (Vecteur.m_fltY == this->m_fltY) && (Vecteur.m_fltZ == this->m_fltZ));
}


// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
// NOTE : Passage par adresse
bool CVecteur3D::CoinciderVecteur(const CVecteur3D * pVecteur) const
{
	return ((pVecteur->m_fltX == this->m_fltX) && (pVecteur->m_fltY == this->m_fltY) && (pVecteur->m_fltZ == this->m_fltZ));
}


// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
// NOTE : Passage par r�f�rence
bool CVecteur3D::CoinciderVecteurRef(const CVecteur3D & rVecteur) const
{
	return ((rVecteur.m_fltX == this->m_fltX) && (rVecteur.m_fltY == this->m_fltY) && (rVecteur.m_fltZ == this->m_fltZ));
}



// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
CVecteur3D CVecteur3D::Normax(CVecteur3D Vecteur)
{
	float normeTemp = 0.0f;
	normeTemp = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	if (normeTemp < sqrt(pow(Vecteur.m_fltX, 2) + pow(Vecteur.m_fltY, 2) + pow(Vecteur.m_fltZ, 2)))
	{
		return Vecteur;
	}
	return *this;
}


// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
// NOTE : Passage par adresse
CVecteur3D * CVecteur3D::Normax(CVecteur3D * pVecteur)
{
	float normeTemp = 0.0f;
	normeTemp = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	if (normeTemp < sqrt(pow(pVecteur->m_fltX, 2) + pow(pVecteur->m_fltY, 2) + pow(pVecteur->m_fltZ, 2)))
	{
		return pVecteur;
	}
	return this;
}


// BUT : M�thode pour voir si deux vecteurs sont identiques
// ENTREES : Un autre vecteur
// SORTIES : Un bool�en
// NOTE : Passage par r�f�rence
CVecteur3D & CVecteur3D::NormaxRef(CVecteur3D & rVecteur)
{
	float normeTemp = 0.0f;
	normeTemp = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	if (normeTemp < sqrt(pow(rVecteur.m_fltX, 2) + pow(rVecteur.m_fltY, 2) + pow(rVecteur.m_fltZ, 2)))
	{
		return rVecteur;
	}
	return *this;
}
*/
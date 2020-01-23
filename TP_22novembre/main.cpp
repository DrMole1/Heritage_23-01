#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include "CVecteur3D.h"
#include "CPoint.h"
#include "CPointCoul.h"

using namespace std;


int main()
{
	//Déclaration des variables
	//================================
	float fltX = 9.0;
	float fltY = 2.0;
	float fltZ = 5.0;
	float fltValeur = 4.0;
	//================================

	//Affichage des données carthésiennes
	/*
	cout << "Vecteur 1 : " << vecteur1.getX() << ", " << vecteur1.getY() << ", " << vecteur1.getZ() << endl;
	cout << "Vecteur 2 : " << vecteur2.getX() << ", " << vecteur2.getY() << ", " << vecteur2.getZ() << endl;
	cout << "Vecteur 3 : " << vecteur3.getX() << ", " << vecteur3.getY() << ", " << vecteur3.getZ() << endl;
	*/

	//Affichage des coincidences
	/*
	CVecteur3D vecteur4(fltX, fltY, fltZ); //vecteur 4 = vecteur 2
	cout << "Methode de coincidence 1, doit retourner faux : " << vecteur2.CoinciderVecteur(vecteur3) << endl;
	cout << "Methode de coincidence 1, doit retourner vrai : " << vecteur2.CoinciderVecteur(vecteur4) << endl;
	cout << "Methode de coincidence 2 (adresse), doit retourner faux : " << vecteur2.CoinciderVecteur(vecteur3) << endl;
	cout << "Methode de coincidence 2 (adresse), doit retourner vrai : " << vecteur2.CoinciderVecteur(vecteur4) << endl;
	cout << "Methode de coincidence 3 (ref), doit retourner faux : " << vecteur2.CoinciderVecteurRef(vecteur3) << endl;
	cout << "Methode de coincidence 3 (ref), doit retourner vrai : " << vecteur2.CoinciderVecteurRef(vecteur4) << endl;
	*/

	/*
	//Affichage des normes les plus grandes
	cout << "Methode de comparaison de normes, doit retourner 9.0 : " << vecteur2.Normax(vecteur3).getX() << endl;
	cout << "Methode de comparaison de normes, doit retourner 2.0 : " << vecteur2.Normax(vecteur3).getY() << endl;
	cout << "Methode de comparaison de normes, doit retourner 5.0 : " << vecteur2.Normax(vecteur3).getZ() << endl;
	cout << "Methode de comparaison de normes par adresse, doit retourner 9.0 : " << vecteur2.Normax(vecteur3).getX() << endl;
	cout << "Methode de comparaison de normes par adresse, doit retourner 2.0 : " << vecteur2.Normax(vecteur3).getY() << endl;
	cout << "Methode de comparaison de normes par adresse, doit retourner 5.0 : " << vecteur2.Normax(vecteur3).getZ() << endl;
	cout << "Methode de comparaison de normes par ref, doit retourner 9.0 : " << vecteur2.Normax(vecteur3).getX() << endl;
	cout << "Methode de comparaison de normes par ref, doit retourner 2.0 : " << vecteur2.Normax(vecteur3).getY() << endl;
	cout << "Methode de comparaison de normes par ref, doit retourner 5.0 : " << vecteur2.Normax(vecteur3).getZ() << endl;
	*/

	/*
	//Exercice 4 : Constructeur Valeur par défaut, Afficher, Somme et Produit Scalaire
	//
	//Construction des instances des vecteurs
	//=========================================
	CVecteur3D vecteur1 = CVecteur3D();
	CVecteur3D vecteur2(fltX, fltY, fltZ);
	CVecteur3D vecteur3(fltValeur);
	//=========================================
	vecteur1.Affichage();
	vecteur2.Affichage();
	vecteur3.Affichage();
	cout << "Somme de vecteurs : valeur X (9+4): " << vecteur2.SommeVecteur(vecteur3).getX() << endl;
	cout << "Somme de vecteurs : valeur Y (2+4): " << vecteur2.SommeVecteur(vecteur3).getY() << endl;
	cout << "Somme de vecteurs : valeur Z (5+4): " << vecteur2.SommeVecteur(vecteur3).getZ() << endl;
	cout << "Produit scalaire : 9*4 + 2*4 + 5*4 : " << vecteur2.ProduitScalaire(vecteur3) << endl;
	*/

	//Exercice 5 : comptage de points
	/*
	//Construction du premier point puis affichage du compteur
	CPoint point1 = CPoint();
	cout << "Nombre de points : " << CPoint::compte() << endl;

	//Construction du second point puis affichage du compteur
	CPoint point2 = CPoint();
	cout << "Nombre de points : " << CPoint::compte() << endl;

	//Construction du troisième point puis affichage du compteur
	CPoint point3 = CPoint();
	cout << "Nombre de points : " << CPoint::compte() << endl;
	*/

	string myColor = "red";
	CPoint point = CPoint(2, 4);

	CPointCoul ptCoul1 = CPointCoul();
	CPointCoul ptCoul2 = CPointCoul(point.getX(), point.getY(), myColor);

	cout << "Premier point de couleur sans parametre : " << endl;
	ptCoul1.afficher();
	cout << "Deuxieme point de couleur avec parametres : " << endl;
	ptCoul2.afficher();



	system("pause");
	return 0;
}
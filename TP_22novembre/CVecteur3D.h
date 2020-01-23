//================================================
// Fichier : CVecteur3D.h
// Classe : CVecteur3D
// Description : Classe servant à modéliser un vecteur sur un espace 3D
// Attributs : réels X, Y et Z

// Auteur : Prob Bastien
// 22/11/2019 : Date de création
// 25/11/2019 : Ajout des méthodes Afficher, Somme et ProduitScalaire
//================================================

#pragma once

class CVecteur3D
{
	private:
		float m_fltX;
		float m_fltY;
		float m_fltZ;

	public:
		CVecteur3D();
		CVecteur3D(float, float, float);
		CVecteur3D(float);
		const float getX();
		const float getY();
		const float getZ();
		/*bool CoinciderVecteur(const CVecteur3D Vecteur) const;
		bool CoinciderVecteur(const CVecteur3D *pVecteur) const;
		bool CoinciderVecteurRef(const CVecteur3D &rVecteur) const;
		CVecteur3D Normax(CVecteur3D Vecteur);
		CVecteur3D *Normax(CVecteur3D *pVecteur);
		CVecteur3D &NormaxRef(CVecteur3D &rVecteur);*/
		const void Affichage();
		CVecteur3D SommeVecteur(const CVecteur3D vecteur);
		float ProduitScalaire(const CVecteur3D vecteur);
};
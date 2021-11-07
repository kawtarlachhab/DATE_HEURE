#include "DateH.h"
#include  <iostream>
using namespace std;
using namespace date_heure;
date_heure::DateH::DateH(int H, int M, int S, int Jour, int Mois, int Annee) : heure(H, M, S)
{
	// remarque : si le jours et l'anne et le mois sont valides, Alors jour valide, sinon 0
	// si l'annee et le mois sont valides 
	if (annee_valide(Annee) && Mois_valide(Mois))
	{
		//alors si le jours est valide
		if (Jour_valide(Jour, Mois,Annee))
		{
			//affecter 
			this->annee = Annee;
			this->mois = Mois;
		}
		//sinon initialiser 
		else
		{
			this->jour = 1;
			this->mois = 1;
			this->annee = 1999;
		}

	}	
	//sinon initialiser 
	else
	{
		this->jour = 1;
		this->mois = 1;
		this->annee = 1999;
	}
}

date_heure::DateH::~DateH()
{
}
//valider  annee
bool date_heure::DateH::annee_valide(int annee)
{
	//on suppose qu'une aanee valide est comprise entre 1998 et 2025
	if (annee > 1998 && annee < 2026) return true;
	return false;
}
//valider mois
bool date_heure::DateH::Mois_valide(int Mois)
{
	if (Mois > 0 && Mois <= 12)  return true;
	return false;
}
//determiner nombre de jours du mois
int date_heure::DateH::nbr_jour_mois(int Mois , int annee)
{
	///Mois fivrier 
	if (Mois == 2)
	{
		///Annee bissextile
		if (((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400 == 0))return 29;
		//Anne  non bessextile
		else return 28;
	}
	//Mois de 30 jrs
	else if ((Mois % 2 == 0 && Mois > 7 && Mois <= 12) || (Mois % 2 != 0 && Mois <= 7)) return 31;
	/// sinon, Mois 31 jrs
	else return 30;
}
//valider jour

int date_heure::DateH::Jour_valide(int jour, int Mois, int annee)
{
		switch (nbr_jour_mois(Mois,annee))
		{
		case 28: if (jour > 0 && jour <= 28) { this->jour = jour; return  1; } break;
		case 29: if (jour > 0 && jour <= 29) { this->jour = jour; return  1; } break;
		case 30: if (jour > 0 && jour <= 30) { this->jour = jour; return  1; } break;
		case 31: if (jour > 0 && jour <= 31) { this->jour = jour; return  1; } break;
		default: break; 
		}
		return ((int)0);
}

int date_heure::DateH::comparer_date(const DateH& DH) const
{
	if (this->annee > DH.annee) return 1;
	if (this->annee == DH.annee)
	{
		if (this->mois > DH.mois) return 1;
		if (this->mois == DH.mois)
		{
			if (this->jour > DH.jour) return 1;
			//cas deux dates egales
			if (this->jour == DH.jour) return 0;
		}
	}
	// sinon
	else return -1;
}

bool date_heure::DateH::operator>(const DateH& DH) const
{
	if ((comparer_date(DH) == 1)  || 
	( (comparer_date(DH) == 0) && this->convertir_to_second() > DH.convertir_to_second())) {return true; }
	return false;
}

void date_heure::DateH::afficher() const
{
	 //affichage du jour : jj:mm:aaaa
	 this->jour < 10 ? cout << 0 << this->jour << "/" : cout << this->jour << "/";
	 this->mois < 10 ? cout << 0 << this->mois << "/" : cout << this->mois << "/";
	 this->annee < 10 ? cout << 0 << this->annee << "/" : cout << this->annee << " ";

	 // affichage de l'heure : hh:mm:ss
	 this->date_heure::heure::afficher();
}

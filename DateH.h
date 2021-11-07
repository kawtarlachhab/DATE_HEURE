#pragma once
#include "heure.h"
using namespace date_heure;
namespace  date_heure
{
	class DateH : public heure
	{
	public:
		 DateH(int, int, int, int, int, int);
		 ~DateH();
		 bool Mois_valide(int Mois);
		 bool annee_valide(int annee);
		 bool operator>(const DateH& DH) const;
		 int  nbr_jour_mois(int Mois,int annee);
		 int  Jour_valide(int jour, int Mois, int annee);
		 int  comparer_date(const DateH& D) const;
		 void afficher()const;
	private:
		int jour, mois, annee;
	};
};



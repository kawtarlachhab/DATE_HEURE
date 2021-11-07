#include "heure.h"
#include <iostream>
using namespace std;
date_heure::heure::heure(int heure, int minutes, int secondes)
{
	 //heure
	(heure > 0 && heure < 24) ? this->Heure = heure : this->Heure = 0;

	 //minutes
	 (minutes > 0 && minutes < 60 )? this->Minutes = minutes : this->Minutes = 0;
	 
	 //secondes
	 (secondes > 0 && secondes < 60 )? this->Secondes = secondes :  this->Secondes = 0;
}

date_heure::heure::~heure()
{
}

int date_heure::heure::convertir_to_second() const
{
	return (this->Heure * 3600 + this->Minutes * 60 + this->Secondes);
}

bool date_heure::heure::operator>(const heure& H) const
{
	if (this->convertir_to_second()> H.convertir_to_second()) return true;
	return false;
}

void date_heure::heure::afficher() const
{
	// affichage de l'heure : hh:mm:ss
	this->Heure < 10 ?   cout << 0 << this->Heure << ":" : cout << this->Heure << ":";
	this->Minutes < 10 ? cout << 0 << this->Minutes << ":" : cout << this->Minutes << ":";
	this->Secondes < 10 ? cout << 0 << this->Secondes << ":" : cout << this->Secondes;
}

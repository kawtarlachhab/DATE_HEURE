#pragma once
 namespace date_heure
 {
	 class heure
	 {
	 public:
	    heure(int, int, int);
	   ~heure();
	    bool operator>(const heure& H) const;
	    int convertir_to_second() const;
	    void afficher() const;
	 protected:
		 int Heure, Minutes, Secondes;
	 };
 };



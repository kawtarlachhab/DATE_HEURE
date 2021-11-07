// DATE_HEURE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "heure.h"
#include "DateH.h"
using namespace std;
using namespace  date_heure;
int main()
{
   // bool result;
    heure h2(5, 45, 30);
    heure h1(1, 1, 1);
    DateH DATE1(13, 55, 55,13 ,10 , 2021);
    DateH DATE2(1, 55, 55, 13, 10, 2021);
    DATE1.afficher();
    cout << "\n";
    DATE2.afficher();
    cout << "\n";
    h1.afficher();
    cout << "\n";
    h2.afficher();
    h1 > h2;
    cout << "\n";
    if (DATE1 > DATE2) cout << " DATE1 est superieur a DATE2"; 
    else cout << " DATE1 est inferieur a DATE2";


}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

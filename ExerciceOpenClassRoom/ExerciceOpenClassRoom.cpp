#include "iostream"
using namespace std;
void exercice1(){
    //Demander deux nombres à l'utilisateur.
    //Calculer la somme de ces deux nombres.
    //Et afficher le résultat.
    double premierNombre, deuxiemeNombre;

    cout << "Entrez le premier nombre : ";
    cin >> premierNombre;
    cin.ignore();

    cout << endl << "Entrez le deuxieme nombre : ";
    cin >> deuxiemeNombre;
    cin.ignore();

    const double calcule = premierNombre + deuxiemeNombre;

    cout << "Voici le resultat de votre calcule : " << calcule;
}

void echange(double& a, double& b)
{
    double temporaire(a); //On sauvegarde la valeur de 'a'
    a = b;                //On remplace la valeur de 'a' par celle de 'b'
    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'

}




#include <iostream>
#include "cmath"
using namespace std;


//Fonction qui me permet d'afficher
void affichache() {
    string nomPersone("Gaetan");
    int agePersonne(19); //Initialisation d'une variable
    int &refAge(agePersonne);
    cout << nomPersone << "  " << agePersonne << " ans" << endl;
    cout << "test " << refAge << endl;
}

//Fonction qui me permait de tester les références
void calcule() {
    int variable(12);
    int &reference(variable); //Réréfence de ma variable
    //La variable reférence pointe sur la variable 12 en faite il y a deux variable mais pour qu'une seule
    //case mémoire
    variable = 27;
    reference++;
    cout << reference;
}

//Fonction demande valeur
void demandeInt() {

    cout << "Entrez votre age : ";
    int agePersonne(0);
    cin >> agePersonne;

    cout << endl << "Vous avez entre :  " << agePersonne;
}
//Fonction qui demande un nom (juste un mot)
void demandeString(){
    cout << "Nom : ";
    string nomPersonne("");
    cin >> nomPersonne;
    cout << endl <<"Nom entre : " << nomPersonne;

}
//Fonction qui demande un string mais avec des espaces
void demandePhraseEntiere(){
    cout << "Quel est votre prenom ?" << endl;
    string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
    getline(cin,nomUtilisateur); //Me permet de récupérer la ligne entière

    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On crée une case mémoire pour stocker un nombre réel
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écrit l'utilisateur
    cin.ignore();


    cout << "Entrez une phrase : " ;
    string phrase("");
    getline(cin,phrase);

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur <<
         " votre phrase est :  " << phrase << "." << endl;
}

int carre(int n){
    return pow(n,2);
}
/*
 * Cette fonction me permet de comprendre les références
 * Par exemple ici je vérifie bien que la référence est la même adresse que la variable
 */

void referenceTest(){
    int variable1(15);

    int& referenceVariable1(variable1);

    cout << "Adresse de la variable 1 : "<<&variable1 << endl;
    cout << "Adresse de la reference de la variable 1  : "<<&referenceVariable1 << endl;


}
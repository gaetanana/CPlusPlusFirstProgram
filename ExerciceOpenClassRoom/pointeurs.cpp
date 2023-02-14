//
// Created by Gaetan on 08/02/2023.
//

#include "headerExerciceOpenClassRoom.h"
#include "iostream"

using namespace std;
void pointeur1(){
    int variable1(10);

    int* pointeurVariable1 = &variable1; //Ce pointeur contient l'adresse de la variable "variable1"

    cout << "Voici l'adresse de la variable par le pointeur :  " << pointeurVariable1 << endl;
    cout << "Voici l'adresse de la variable par la variable :  " << &variable1 << endl;

}
void valeurParPointeur(){
    int variable(14); //Je stocke la valeur 14

    int* pointeurVariable = &variable;

    cout << "Voici la valeur grâce à la variable :  " << variable << endl;
    cout << "Voici la varleur grâce au pointeur :  " << *pointeurVariable << endl;
}

/*
 * Cette fonction me permet de changer une valeur d'une variable via un pointeur
 */

void changementValeurParPointeur(){
    int variable(19);

    int* pointeurVariable = &variable; //Je stocke l'adresse de la variable "variable"

    //Je vais changer la valeur de la variable avec le pointeur
    *pointeurVariable = 17; //Je change la valeur de la variable

    cout << "Valeur de la variable :: " << variable << endl;
    cout << "Valeur de la variable par le pointeur :: " << *pointeurVariable << endl;


}

void QCM(){
    string reponseA, reponseB, reponseC;
    reponseA = "La peur des jeux de loterie";
    reponseB = "La peur du noir";
    reponseC = "La peur des vendredis treize";

    cout << "Qu'est-ce que la 'kenophobie' ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A,B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
        case 'A':
            reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
            break;
        case 'B':
            reponseUtilisateur = &reponseB;
            break;
        case 'C':
            reponseUtilisateur = &reponseC;
            break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

}

void allouerDynamiquement(){
    int* pointeur(nullptr); //Le pointeur est null
    pointeur = new int ; //J'alloue de la mémoire au pointeur


}
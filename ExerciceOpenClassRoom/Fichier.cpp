//
// Created by Gaetan on 08/02/2023.
//

#include "headerExerciceOpenClassRoom.h"
#include <fstream>
#include "iostream"

using namespace std;

void ouvertureFlux(){
    const string monFichier("../Fichiers/text.txt");
    ofstream monFlux(monFichier.c_str(),ios::app); //Déclaration d'un flux permettant d'écrire dans le fichier
    //ios::app permet de rajouter et ne pas écraser le contenue déja existant

    if(monFlux){
        cout << "Fichier ouvert";

    }
    else {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }


}

void ecritureDansUnFichier(){
    const string monFichier("../Fichiers/ecriture.txt");
    ofstream monFlux(monFichier.c_str(),ios::app); //Déclaration d'un flux permettant d'écrire dans le fichier
    //ios::app permet de rajouter et ne pas écraser le contenue déja existant

    if(monFlux){
        cout << "Fichier ouvert" << endl;
        string ecriture("");
        cout << "Vous pouvez ecrire :" << endl;
        while (ecriture != "STOP"){
            if(ecriture == "STOP"){
                break;
            }
            getline(cin,ecriture) ;
            monFlux << ecriture << endl;
        }

    }
    else {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}


/*
   1)Ligne par ligne, en utilisant getline()
   2)Mot par mot, en utilisant les chevrons >>
   3)Caractère par caractère, en utilisant get()
 */
void lectureFichier(){
    const string monFichier("../Fichiers/ecriture.txt");
    ifstream monFlux(monFichier.c_str(),ios::app); //Déclaration d'un flux permettant d'écrire dans le fichier
    //ios::app permet de rajouter et ne pas écraser le contenue déja existant

    if(monFlux){
        string ligneLue("");

        while(getline(monFlux,ligneLue)){
            cout << ligneLue << endl;
        }

    }
    else {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}
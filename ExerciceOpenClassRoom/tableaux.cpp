//
// Created by Gaetan on 07/02/2023.
//

#include "headerExerciceOpenClassRoom.h"
#include "iostream"
#include "vector"
using namespace std;


void declarationTableauStatic(){
    int taille(10);
    int tab[10];
    for(int i(3); i < taille; i++){
        tab[i] = i;
    }

    for(int element : tab){
        cout << element;
    }
}

void declarationTabbleauDynamic(){
    vector<string> tableauDeString(5,"initialisation");
    //push_back permet de ajouter une case à la fin
    //.size permet d'avoir la taille du tableua

    tableauDeString[0] = "coucou";

    tableauDeString.emplace_back("CoUcOU");


    for(const string& element : tableauDeString){
        cout << element << endl;
    }
}
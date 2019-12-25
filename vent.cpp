#include"vent.hpp"
#include"vehicule.hpp"
#include"owner.hpp"
#include<string>
#include<stdio.h>
#include<string.h>
#include<iostream>
//--------------------------------------------------------
using namespace std;
//--------------------------------------------------------
//   AYMANE TALIBI 3IIR2------------------------:)--------
// description des constructeurs de la classe vent :
VENT :: VENT(){
    numVent=0;
    strcpy(carVendu," ");
    strcpy(matCarVendu," ");
    strcpy(marqCarVendu," ");
    prixCarVendu=0;
    strcpy(clientAcheter," ");
    strcpy(clientVente," ");
    strcpy(intermidiareVente," ");
}
//----------------------------------------------------------
VENT :: VENT(int Id,char* car,char* matr,char* marq,double price,char* CA,char* CV,char* inter){
    numVent=Id;
    strcpy(carVendu,car);
    strcpy(matCarVendu,matr);
    strcpy(marqCarVendu,marq);
    prixCarVendu=price;
    strcpy(clientAcheter,CA);
    strcpy(clientVente,CV);
    strcpy(intermidiareVente,inter);
}
//----------------------------------------------------------
VENT :: VENT(const VENT &V){        
    numVent=V.numVent;
    strcpy(carVendu,V.carVendu);
    strcpy(matCarVendu,V.matCarVendu);
    strcpy(marqCarVendu,V.marqCarVendu);
    prixCarVendu=V.prixCarVendu;
    strcpy(clientAcheter,V.clientAcheter);
    strcpy(clientVente,V.clientVente);
    strcpy(intermidiareVente,V.intermidiareVente);
}
//----------------------------------------------------------
// description de distructeur de la classe VENT:
VENT :: ~VENT(){
    delete &numVent;
    delete &carVendu;
    delete &matCarVendu;
    delete &marqCarVendu;
    delete &prixCarVendu;
    delete &clientAcheter;
    delete &clientVente;
    delete &intermidiareVente;
}
//------------------------------------------------------------
// description des methodes de la classe VENT:
void VENT :: afficher(){
    cout << "numero de vente        : " << numVent << endl;
    cout << "voiture vendu          : " << carVendu << endl;
    cout << "matricule de voiture   : " << matCarVendu << endl;
    cout << "marque de voiture      : " << marqCarVendu << endl;
    cout << "prix de vente          : " << prixCarVendu << endl;
    cout << "client acheteur        : " << clientAcheter << endl;
    cout << "client vendeur         : " << clientVente << endl;
    cout << "intermediaire de vente : " << intermidiareVente << endl;
} 
//-----------------------------------------------------------
void VENT :: modifierVente(VENT){
    char choix;
    cout << "entrez l operation a effectuer :" << endl;
    cout << "entrez 2 pour changement de l ID " << endl;
    cout << "entrez 3 pour changement de la voiture " << endl;
    cout << "entrez 4 pour changement de matricule " << endl;
    cout << "entrez 5 pour changement de la marque " << endl;
    cout << "entrez 6 pour changement de prix " << endl;
    cout << "entrez 7 pour changement de l ID " << endl;
    cout << "entrez 8 pour changement de l ID " << endl;
    //pas encore terminé
    
}
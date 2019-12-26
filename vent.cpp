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
    int choix;
    cout << "entrez l operation a effectuer :" << endl;
    cout << "entrez 1 pour changement de l ID : " << endl;
    cout << "entrez 2 pour changement de la voiture " << endl;
    cout << "entrez 3 pour changement de matricule " << endl;
    cout << "entrez 4 pour changement de la marque " << endl;
    cout << "entrez 5 pour changement de prix " << endl;
    cout << "entrez 6 pour changement de client acheteur " << endl;
    cout << "entrez 7 pour changement de client vendeur " << endl;
    cout << "entrez 8 pour changement d intermidiare de vente " << endl;
    cin >> choix;
    switch (choix)
    {
        case 1:
            cout << "entrez le nouveau ID : " << endl;
            cin >> int nouvID;
            numVent = nouvID;
            break;
        case 2:
            cout << "entrez la nouvelle voiture : "<< endl; 
            cin >> VEHICULE nouvVoiture;
            operator=(voiture,carVendu);
            break;
        case 3:
            cout << "entrez le noveau matricule : "<< endl;
            cin >> char* nouvMatr;
            strcpy(matCarVendu,nouvMatr);
            break;
        case 4:
            cout << "entrez la nouvelle marque : "<< endl;
            cin >> char* nouvMarq;
            strcpy(marqCarVendu,nouvMarq);
            break;
        case 5: 
            cout << "entrez le nouveau prix :  "<< endl;
            cin >> double nouvPrix;
            prixCarVendu=nouvPrix;
            break;
        case 6: 
            cout << "entrez le nouveau client acheteur : "<< endl;
            cin >> char* nouvAcheteur;
            strcpy(clientAcheter,nouvAcheteur);
            break;
        case 7:
            cout << "entrez le nouveau client vendeur : "<< endl;
            cin >> char* nouvVendeur;
            strcpy(clientVente,nouvVendeur);
            break;
        case 8:
            cout << "entrez le nouveau intermidiaire de vente : "<< endl;
            cin >> char* nouvInterr;
            strcpy(intermidiareVente,nouvInter);
            break;
        default:
            cout << "veuillez entrer un choix exist :) " << endl;
            cin >> choix; 
            break;
    }
}
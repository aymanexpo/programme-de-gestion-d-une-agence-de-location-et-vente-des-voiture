#include"assurance.hpp"
#include"vehicule.hpp"
#include"owner.hpp"
//-----------Aymane Talibi-------------------------------
ASSURANCE :: ASSURANCE()idAssurance(0),nomAssurance(" "),villeCiteOfice(" "),numberCarAssuree(0){}
//-----------------------------------------------------
ASSURANCE :: ASSURANCE(int id,char* nom,char* ville,int nombre){
    idAssurance=id;
    strcpy(nomAssurance,nom);
    strcpy(villeCiteOfice,ville);
    numberCarAssuree=nombre;
} 
//------------------------------------------------------
ASSURANCE :: ASSURANCE(const ASSURANCE &a){
    idAssurance=a.idAssurance;
    strcpy(nomAssurance,a.nomAssurance);
    strcpy(villeCiteOfice,a.villeCiteOfice);
    numberCarAssuree=a.numberCarAssuree;
}
//-------------------------------------------------------
ASSURANCE :: ~ASSURANCE(){
    delete &idAssurance;
    delete &nomAssurance;
    delete &villeCiteOfice;
    delete &numberCarAssuree;
}
//-------------------------------------------------------
void ASSURANCE :: afficherAssur(){
    cout << "id de l'assurance         : " << idAssurance << endl;
    cout << "nom de l'assurance        : " << nomAssurance << endl; 
    cout << "ville de l'assurance      : " << villeCiteOfice << endl;
    cout << "nombre de voiture assurée : " << numberCarAssuree << endl;
}
//-------------------------------------------------------
void ASSURANCE :: modifierAssure(int i){
    int comp = i;
    if(comp == 1){
        cout << "entrez le nouveau ID :" << endl;
        cin >> idAssurance;
    } 
    else if(comp == 2){
        cout << "entrez le nouveu nom d assurance : " << endl;
        cin >> nomAssurance;        
    }
    else if(comp == 3){
        cout << "entrez la nouvelle ville d office : " << endl;
        cin >> villeCiteOfice;        
    }  
    else if(comp == 4){
        cout << "entrez le nouveu nombre de voiture assuree : " << endl;
        cin >> numberCarAssuree;        
    } 
    else {
        cout << "ERROR entyrez un choix entre 1 et 4 :) " << endl;
    }
}
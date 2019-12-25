#include "owner.hpp"
#include "vehicule.hpp"
#include"assurance.hpp"
#include"vent.hpp"

OWNER::OWNER(int i,char* n,char* p,char* C)
: ID(i),
  nom(n),
  prenom(p),
  CIN(C)
{}
OWNER::OWNER():ID(0),nom(" "),prenom(" "),CIN(" "),voiture(VEHICULE()){}
OWNER::OWNER(const OWNER &OWNER){
    ID=OWNER.ID;
    strcpy(nom,OWNER.nom);
    strcpy(prenom,OWNER.prenom);
    strcpy(CIN,OWNER.CIN);
}
//-----------------------------------------------------
OWNER::~OWNER(){
    delete this;
}
//-----------------------------------------------------
void OWNER::ownVehi(VEHICULE v){
    voiture = v ;
}
//-----------------------------------------------------
void OWNER::afficherOwn(){
    cout << "ID de client      : " << ID << endl;
    cout << "Nom de client     : " << nom << endl;
    cout << "Prenom de client  : " << prenom << endl;
    cout << "CIN de client     : " << CIN << endl;  
    cout << "voiture de client : " << OWNER::voiture << endl;
}

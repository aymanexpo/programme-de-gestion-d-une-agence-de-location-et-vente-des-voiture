#include"vehicule.hpp"
#include"owner.hpp"
//---------AYMANE TALIBI------------------------
//----------------------------------------------
VEHICULE::VEHICULE(char* mar,char* mat,double p)
: marque(mar), 
  matricule(mat), 
  prix(p)
{}
VEHICULE::VEHICULE(const VEHICULE &V)
: matricule(V.matricule),
  marque(V.marque),
  prix(V.prix)
{}
VEHICULE::VEHICULE(){
    matricule=" ";
    prix=0;
    marque=" ";
}
//----------------------------------------------
VEHICULE::~VEHICULE(){
    delete &marque;
    delete &matricule;
    delete &prix;
}

//----------------------------------------------
void VEHICULE::modifier(char* name){
    strcpy(matricule,name);
}
//----------------------------------------------
bool VEHICULE::operator<(VEHICULE V1){
    if(prix<V1.prix) return true; 
    else return false;
}
//----------------------------------------------
void VEHICULE::vehiculeOwn(OWNER ow){
    vehiculeOwner = ow;
}
//----------------------------------------------
void VEHICULE::afficher(){
    cout << "marque    : " << marque << endl;
    cout << "matricule : " << matricule << endl;
    cout << "prix : " << prix << endl;
} 
// surcharge de l operator=  de reception 
VEHICULE  VEHICULE :: operator=(VEHICULE V1,VEHICULE V2){
    strcpy(V1.marque,V2.marque);
    strcpy(V1.matricule,V2.matricule);
    V1.prix=V2.prix;
    V1.owner=V2.owner;
} 
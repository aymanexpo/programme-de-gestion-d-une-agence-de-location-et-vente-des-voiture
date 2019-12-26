#if !defined (__VEHICULE__)
#define __VEHICULE__
//----------------------------------------------
    #include<string>
    #include<stdio.h>
    #include<string.h>
    #include<iostream>
    #include"owner.hpp"
    //----------------------------------------------
    using namespace std;
    //----------------------------------------------
    class VEHICULE{
        private:
            char* marque;
            char* matricule;
            double prix;
            OWNER vehiculeOwner;
        public:
            //construt
            VEHICULE(char*,char*,double);
            VEHICULE(const VEHICULE &VEHICULE);
            VEHICULE();
            ~VEHICULE();//destruct
            //------------------------------------------
            void afficher();
            void modifier(char*);
            bool operator<(VEHICULE);// pour la comparaison entre prisx de voiture et une autre voiture donnée 
            void vehiculeOwn(OWNER);
            //------------------------------------------
            // operators surchargé:
            VEHICULE operator=(VEHICULE,VEHICULE);
    };    
#endif
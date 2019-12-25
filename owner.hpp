#if !defined (__OWNER__)
#define __OWNER__
//------------------------------------------------------
    #include<string>
    #include<stdio.h>
    #include<string.h>
    #include<iostream>
    #include"assurance.hpp"
    #include"vehicule.hpp"
    //---------------------------------------------------
    using namespace std;
    //---------------------------------------------------    
    class OWNER{
        private:
            int ID;
            char* nom;
            char* prenom;
            char* CIN;
            VEHICULE voiture;
        public:
            OWNER();
            OWNER(int,char*,char*,char*);
            OWNER(const OWNER &OWNER);
            //-----------------------------------
            ~OWNER();
            //-----------------------------------
            void afficherOwn();
            void ownVehi(VEHICULE);
            //complet
    };
#endif
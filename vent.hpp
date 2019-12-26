#if !defined (__VENT__)
#define __VENT__
    //----------------------------------------------------------
    #include"vehicule.hpp"
    #include"owner.hpp"
    #include<string>
    #include<stdio.h>
    #include<string.h>
    #include<iostream>
    //----------------------------------------------------------
    using namespace std;
    //---------------------------------------------------------- 
    class VENT{
        private:
            int numVent;
            char* carVendu;
            char* matCarVendu;
            char* marqCarVendu;
            double prixCarVendu;
            char* clientAcheter;
            char* clientVente;
            char* intermidiareVente;
        public:
            VENT();
            VENT(int,char*,char*,char*,double,char*,char*char*);
            vent(const VENT &);
            ~VENT();//distructeur des cases memoires de la classe 
            //-----------------------------------------------------
            void afficher();
            void modifierVente(VENT);
    };
#endif
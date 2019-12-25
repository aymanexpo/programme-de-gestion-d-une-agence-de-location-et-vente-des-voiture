#if !defined (__ASSURANCE__)
#define __ASSURANCE__
//----------------------------------------------------------
    #include"vehicule.hpp"
    #include"owner.hpp"
    #include<string>
    #include<stdio.h>
    #include<string.h>
    #include<iostream>
    //-----------------------------------------------
    using namespace std;
    //-----------------------------------------------
    class ASSURANCE{
        private:
            int idAssurance;
            char* nomAssurance;
            char* villeCiteOfice;
            int numberCarAssuree;
        public:
            ASSURANCE();
            ASSURANCE(int,char*,char*,int);
            ASSURANCE(const ASSURANCE &ASSURANCE);
            //----------------------------------------
            ~ASSURANCE();
            //----------------------------------------
            void afficherAssur();
            void modifierAssure(int);
    };
#endif
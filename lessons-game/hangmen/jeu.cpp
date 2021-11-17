#include "jeu.h"
#include "constantes.h"

#include <iostream>
#include <chrono>
#include <string>

using namespace std;

int nbAleatoire (int min, int max){
    int nbAl ;
    nbAl=rand()%(max + 1) + min ;
    return nbAl ;
}




void pendu0(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << endl;
}

void pendu1(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "   _            " << endl;
    cout << endl;
}

void pendu2(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "   __           " << endl;
    cout << endl;
}

void pendu3(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "   __|          " << endl;
    cout << endl;
}

void pendu4(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "   __|_         " << endl;
    cout << endl;
}
void pendu5(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu6(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu7(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu8(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu9(){
    cout << endl;
    cout << "                " << endl;
    cout << "                " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu10(){
    cout << endl;
    cout << "                " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu11(){
    cout << endl;
    cout << "     _          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu12(){
    cout << endl;
    cout << "     __         " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu13(){
    cout << endl;
    cout << "     ___        " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu14(){
    cout << endl;
    cout << "     ____       " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu15(){
    cout << endl;
    cout << "     _____      " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu16(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu17(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/         " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu18(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu19(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu20(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |    |     " << endl;
    cout << "     |          " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu21(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |    |     " << endl;
    cout << "     |   /      " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu22(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |    |     " << endl;
    cout << "     |   / \\   " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu23(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |   /|     " << endl;
    cout << "     |   / \\   " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}
void pendu24(){
    cout << endl;
    cout << "     ______     " << endl;
    cout << "     |/   |     " << endl;
    cout << "     |    o     " << endl;
    cout << "     |   /|\\   " << endl;
    cout << "     |   / \\   " << endl;
    cout << "     |          " << endl;
    cout << "   __|__        " << endl;
    cout << endl;
}


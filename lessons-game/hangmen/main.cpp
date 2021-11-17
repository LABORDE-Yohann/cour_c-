//##########################headers########################################
#include "constantes.h"
#include "jeu.h"
#include "menu.h"
//#######################dictionnaires#####################################
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <iostream>
//je suis allez chercher des bibliothèques que je ne maitrisais pas qui aurai pu être intéressante pour ce projet sur internet maleureusement je n'ai pas eu le temp d'explorer toutes les options

using namespace std;

int main() {
    //je n'avais pas d'idée pour la liste de mot donc je suis allez la prendre sur internet
       char liste[][30]={"abolir","ablution","bachot","balise","cabine","camphre","debit","decorum","echoir","egouts","famine","fantoche","gazeux","granite","hiatus","hideux","ignoble","iguane","rejouir","jongler","kaolin","kiosque","lezard","linotype","malice","mastiquer","nymphe","nickel","orage","optique","oraison","parution","pendu","quartz","quater","rayon","rapide","scenario","scolaire","tacher","terminus","univers","urbanisme","vestibule","violent","wagon","water-polo","xelophone","yard","yen","zenith","zephyr"};
       char mask[][30]= {"ab____","a______n","b__h__","b__i__","c_b___","___ph__","d____","d_____m","_c___r","_go___","f_i__","f____c__","g____x","g___i__","h_a___","h____x","i_____e","ig____","__j___r","j__g___","k___i_","k_____e","l____d","l____y__","m__i__","m____q___","n___h_","n__k__","o__g_","_p__q__","o_a____","p______n","p___u","q_a___","q____r","r_y__","r_p___","_c__a___","s___a___","t__h__","t_r_____","u__v___","_rb______","v__t_____","v__l__","w____","_a___-p___","x_____o__","_ar_","___","z__i__","z___y_"};
       char c,nom[20];
       int i,cpt,mot,essai,cpt1;
       srand(time(NULL));
       mot=nbAleatoire(0,51) ;

       //ici j'ai repris au maximum le jeu du juste prix
       bool continuer{true};
        while(continuer) {
            afficherMenu();
            auto choix = demanderChoixMenu();

            switch(choix) {
            case ChoixMenu::JOUER:
                system("CLS");
                c=strlen(liste[mot]);
                for(i=0,cpt=1;mask[mot][i]!='\0' ; i++){
                    if(mask[mot][i]=='_'){
                        cpt++ ;
                    }
                }

                //j'ai essayé de faire une belle présentation
                cout <<"########################################################" << endl;
                cout <<"##            Bienvenue dans le jeu du PENDU          ##" << endl;
                cout <<"#Vous avez droit a 24 erreurs pour trouver le mot cache#" << endl;
                cout <<"##              BONNE CHANCE...                       ##" << endl;
                cout <<"########################################################" << endl << endl;
                puts(mask[mot]) ;
                essai=0 ;
                do{
                        //je me suis pas mal renseigné sur internet et à partir de là j'ai voulù essayé "printf" et d'autre façons que je ne connaissais pas
                    if(cpt>0 && essai<=23){
                        printf("Proposez une lettre ");
                        c=getch();
                        printf("%c\n",c);
                        cpt1=cpt;
                        for(i=0;liste[mot][i]!='\0';i++){
                            if(liste[mot][i]==c && mask[mot][i]=='_'){
                                mask[mot][i]=c;
                                cpt-- ;
                            }

                        }
                        if(cpt1==cpt && essai!=24){
                            essai=essai+1;
                            printf("\n\nAttention : La lettre \"%c\" n'existe pas parmi les lettres cach\x82s\nIl vous reste %d erreurs\n\n",c,24-essai) ;
                            switch (essai){
                                case 1 : pendu1(); break;
                                case 2 : pendu2(); break;
                                case 3 : pendu3(); break;
                                case 4 : pendu4(); break;
                                case 5 : pendu5(); break;
                                case 6 : pendu6(); break;
                                case 7 : pendu7(); break;
                                case 8 : pendu8(); break;
                                case 9 : pendu9(); break;
                                case 10 : pendu10(); break;
                                case 11 : pendu11(); break;
                                case 12 : pendu12(); break;
                                case 13 : pendu13(); break;
                                case 14 : pendu14(); break;
                                case 15 : pendu15(); break;
                                case 16 : pendu16(); break;
                                case 17 : pendu17(); break;
                                case 18 : pendu18(); break;
                                case 19 : pendu19(); break;
                                case 20 : pendu20(); break;
                                case 21 : pendu21(); break;
                                case 22 : pendu22(); break;
                                case 23 : pendu23(); break;
                                case 24 : pendu24(); break;
                                default :;
                            }
                     }
                     puts(mask[mot]);
                }
            }while(cpt>1 && essai<=23);
            if (cpt && essai<=23){
                    //le mot ne s'affiche pas a la fin
                printf("\n\nFélicitation !!! Vous avez devin\x82 le mot %s  Fantastique...\nLe mot \x82tait bien \"%s\"",nom,liste[mot]);
            }
            else if(cpt=0 || essai>=24){
            printf("\nD\x82sol\x82 %s ... Faites vos dernieres prieres... Vous serez pendu hahahahaha!!!",nom);
            }

            getch();
            return 0;
                break;

            case ChoixMenu::QUITTER:
                cout << "Au revoir !" << endl;
                continuer = false;
                break;

            case ChoixMenu::INCORRECT:
            default:
                return EXIT_FAILURE;
            }
        }
        return EXIT_SUCCESS;
}

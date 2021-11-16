#include <iostream>
#include <ctime>

using namespace std;


enum class ChoixMenu {
    JOUER = 'j',
    JOUER_FACILE = 'f',
    JOUER_TROIS_PARTIES = 't',
    QUITTER = 'q',
    INCORRECT
};

int proposition{0};
const auto BORNE_MIN{0};
const auto BORNE_MAX{10'000};
const auto BORNE_MAX_FACILE{1'000};
auto choix{ChoixMenu::JOUER};
srand((unsigned int)time(0));
char saisieChoix;

void demanderProposition(int &proposition)
{
    cin >> proposition;
}

ChoixMenu demanderChoixMenu()
{
    char saisieChoix;
    cin >> saisieChoix;
    if (saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_FACILE) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(saisieChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
}

void jouerPartie(int leJustePrix, int max)
{
    auto proposition{0};
    auto nombreTentatives{0};
    do
    {
        cout << "Proposition? ";
        demanderProposition(proposition);

        cout << proposition;

        if (proposition >= BORNE_MIN && proposition < max)
        {
            nombreTentatives++;
            if (proposition == leJustePrix)
            {
                cout << "Bravo! " << endl;
            }
            else if (proposition > leJustePrix)
            {
                cout << "C'est moins ! " << endl;
            }
            else
            {
                cout << "C'est plus ! " << endl;
            }
        }
    } while (proposition != leJustePrix && proposition >= BORNE_MIN);

    if (proposition == leJustePrix)
    {
        cout << "partie terminée! "
             << "en " << nombreTentatives << " tentatives" << endl;
    }
    else
    {
        cout << "partie abandonnée ";
    }
}

void jouerTroisParties()
{
    cout << "C'est parti ! " << endl;
    for (auto aDeviner : {208, 42, 1984})
    {
        jouerPartie(aDeviner, BORNE_MAX);
    }
}

void afficherMenu()
{
    cout << static_cast<char>(ChoixMenu::JOUER) << ": jouer" << endl;
    // on ajoute les choix possible à l'affichage
    cout << static_cast<char>(ChoixMenu::JOUER_FACILE) << ": jouer" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) << ": jouer" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << ": quitter" << endl;
}

int main()
{
    cout << "#######################" << endl;
    cout << "#Bienvenue juste prix##" << endl;
    cout << "#######################" << endl;
    cout << "#press " << ChoixMenu::'JOUER' << " pour jouer##" << endl;
    cout << "#press 'q' pour quiter#" << endl;
    cout << "#######################" << endl;



    cin >> saisieChoix;
     if (saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER)) {
        choix = static_cast<ChoixMenu>(saisieChoix);
     }else {
     choix=ChoixMenu::INCORRECT;
     }
     switch(choix){
    case ChoixMenu::JOUER:
        cout<<"C'est parti !"<<endl;
        }

    for (int i = 0; i < 1; i++)
        {
        int aDeviner = rand()%10000 +1;

        auto nombreTentatives{0};

        do
        {
            cout << aDeviner;
            cin >> proposition;
            //afficher la variable

            if(proposition>=BORNE_MIN&&proposition<=BORNE_MAX) {
                nombreTentatives++;
                cout << "vous avez dit ";
                cout << proposition << endl;

                if (aDeviner != proposition) {
                    if (aDeviner > proposition) {
                    cout << "c'est plus" << endl;
                    }else {
                    cout << "c'est moins" << endl;
                    }
                }
            }
        }
        while (proposition != aDeviner && proposition > 0);

        if (aDeviner == proposition) {
            cout << "félicitation t'as gagné petit battard !!!" << endl;
            cout << "la valeur était bien ";
            cout << aDeviner << endl;
        }else {
            cout <<"merci de donnez une valeur positive";
        }
    }
}

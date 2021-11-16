#include <iostream>
#include <array>

#include "constantes.h"
#include "jeu.h"
#include "menu.h"

using namespace std;
/************************************************************************************************************************************************/





int main()
{
    const auto BORNE_MIN{0};
    const auto BORNE_MAX{10'000};
    cout << "Bienvenue au juste prix" << endl;

    // on cr�� un bool�en continuer
    bool continuer(true);
    // ici on insert la boucle while
    while (continuer)
    {

        afficherMenu();

        auto choix = demanderChoixMenu();

        switch (choix)
        {
            // on met � jour le switch aussi
        case ChoixMenu::JOUER:
            jouerPartie(3000, BORNE_MAX);
            break;
        case ChoixMenu::JOUER_FACILE:
            jouerPartie(250, BORNE_MAX_FACILE);
            break;
        case ChoixMenu::JOUER_TROIS_PARTIES:
            jouerTroisParties();
            break;
        case ChoixMenu::QUITTER:
            cout << "Au revoir " << endl;
            continuer = false;
            break;
        case ChoixMenu::INCORRECT:
        default:
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Bienvenue juste prix" << endl;

    int proposition{0};

    srand((unsigned int)time(0));

    for (int i = 0; i < 10; i++)
        {
        int aDeviner = rand()%10000 +1;

        do
        {
            cin >> proposition;

            //afficher la variable

            cout << "vous avez dit ";
            cout << proposition << endl;


            if (proposition < 0) {

            }else if (aDeviner != proposition) {
                if (aDeviner > proposition) {
                cout << "c'est plus" << endl;
                }else; {
                cout << "c'est moins" << endl;
                }
            }
        }
        while (aDeviner != proposition || proposition > 0);

        if (aDeviner == proposition) {
            cout << "félicitation t'as gagné petit battard !!!";
            cout << "la valeur était bien";
            cout << aDeviner << endl;
        }else; {
            cout <<"merci de donnez une valeur positive";
        }
    }
}

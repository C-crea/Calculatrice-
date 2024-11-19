#include <iostream>
#include <cmath>

using namespace std;

//Fonction pour l'addition;
void addition(const double* a, const double* b, double* result){
    *result = *a + *b;
}

//Fonction pour la soustraction;
void soustraction(const double* a, const double* b, double* result){
    *result = *a - *b;
}

void multiplication(const double* a, const double* b, double* result){
    *result = *a * *b;
}

void division(const double* a, const double* b, double* result){
    if (b != nullptr)
        *result = *a / *b;
    else {
        cout << "Erreur!" << endl;
    }
}

void racineCarrée(const double* a, double* result){
    if (*a>= 0){
        *result= sqrt(*a);
    }else{
        cout<<"Erreur! racine carrée d'un nombre negatif"<<endl;
    }
}
int main() {
    double n1, n2, result;
    int choix;

    cout<<"Bienvenue dans la calculatrice avancée!"<<endl;
    cout<<"1. Addition/n 2. Soustraction/n 3. Multiplication/n 4. Division/n 5.Puissance/n 6.Racine Carrée"<<endl;
    cin>>choix;
    if (choix==6){
        cout<<"Entrer un nombre"<<endl;
        cin>>n1;
        racineCarrée(&n1, &result);
    }else{
        cout<<"Entrer le premier nombre:"<<endl;
        cin>> n1;
        cout<<"Entrer le deuxieme nombre:"<<endl;
        cin>> n2;

        switch (choix) {
            case 1:
                addition(&n1, &n2, &result);
                cout<<"Le résultat de l'addition est:"<<endl;
                break;

            case 2:
                soustraction(&n1, &n2, &result);
                cout<<"Le résultat de la soustraction est:"<<endl;
                break;

            case 3:
                multiplication(&n1, &n2, &result);
                cout<<"Le résultat de la multiplication est:"<<endl;
                break;

            case 4:
                division(&n1, &n2, &result);
                if (n2 != 0){
                cout<<"Le résultat de la division est:"<<endl;
                }
                break;
            default:
                cout<<"Choix invalide!"<<endl;
                return 1;
        }

    }
    if (choix >= 1 && choix <= 6){
        cout<<"le resultat est: "<<result<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

void demandeNom(){
    string nom, prenom;
    cout << "Veuillez saisir votre prenom et nom : ";
    cin >> prenom >> nom ;
    cout << " Bonjour " << prenom << " " << nom << " !" << endl;
    
}

void devineUser(){
    int rdmNb = rand() % 1000;
    int userNb;
    int cpt = 0;
    bool etat = false;

    cout << "A deviner : " << rdmNb << endl ;

    while(etat == false){
        cout << "Veuillez saisir un nombre entre 0 et 1000 : ";
        cin >> userNb;


        if(userNb < rdmNb){
            cout << "Veuillez saisir un nombre plus grand ! " << endl ; 
            cpt++; 
        }
        else if(userNb > rdmNb){
            cout << "Veuillez saisir un nombre plus petit!" << endl;
            cpt++;
        }
        else if(userNb == rdmNb){
            cout << "Felicitation ! Vous avez trouve le nombre en " << cpt << " essais." << endl;
            etat = true;
        }

    }

}

void devineOrdi(){

    int repNb;
    int ordiNb;
    int cpt = 0;
    bool etat = false;
    int nb = 500;
    string rep;

    cout << "Veuillez saisir un nombre que je devrai deviner : " ;
    cin >> repNb;

    while(etat == false){

        cout << "Est-ce " << nb << " ? Repondre par oui / + / -  " ;
        cin >> rep;

        if(rep == "oui"){
            cout << "L'ordinateur a trouve en " << cpt << " essais. " << endl;
            etat == true;
        }
        else if(rep == "+"){
            nb = nb+1;
            cpt++;
        }
        else if(rep == "-"){
            nb = nb-1;
            cpt++;
        }
        else{
            cout << "Veuillez saisir une reponse valide." << endl;
        }

    }



}

int main(){

    demandeNom();
    devineUser();
    devineOrdi();
    
}
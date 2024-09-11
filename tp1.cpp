#include <iostream>
using namespace std;

int addition(int a, int b){
    return a + b;
}

void sommePointeur(int *a, int *b, int *c){
    
    *c = *a + *b;

}

void sommeReference(int &a, int &b, int &c){
    
    c = a + b;

}

void triTabCrois(int* tab,int taille){

    // tri
    for(int i = 0 ; i < taille - 1; i++){
        for(int j = 0 ; j < taille -i -1 ; j++){

            if( tab[j] > tab[j+1]){

                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    cout << "Tableau trie : " ;

    for(int i = 0 ; i < taille ; i++){
        cout << tab[i] << " ";
    }

}

void triTabDecrois(int* tab,int taille){

    // tri
    for(int i = 0 ; i < taille - 1; i++){
        for(int j = 0 ; j < taille -i -1 ; j++){

            if( tab[j] < tab[j+1]){

                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    cout << "Tableau trie : " ;

    for(int i = 0 ; i < taille ; i++){
        cout << tab[i] << " ";
    }


}

int main(){

    int nbA, nbB;
    int resultat;

    int a = 5;
    int b = 10;
    int c;
    int taille;
    char choix;

    // Exo 1
    //cout << "Hello world" << endl;    
    //resultat = addition(a,b);
    //cout << "Voici le resultat : " << resultat << endl ;

    // Exo 2 
    //sommePointeur(&a, &b, &c);
    //cout << "Resultat avec pointeur :c = " << c << endl;

    //sommeReference(a,b,c);
    //cout << "Resultat avec reference : c = " << c << endl;


    // Exo 3
    cout << "Veuillez saisir une taille de tableau : ";
    cin >> taille;
    cout << " Tri en ordre croissant ou decroissant ? C ou D : ";
    cin >> choix;

    int* tab = new int[taille];

    if(choix == 'C'){
       
        //Affichage
        cout << "Tableau non trie : ";
        for(int i = 0 ; i < taille ; i++){
            tab[i] = rand()%100;
            cout << tab[i] << " ";
        }

        triTabCrois(tab,taille);
    } 
    else if(choix == 'D'){

        //Affichage
        cout << "Tableau non trie : ";
        for(int i = 0 ; i < taille ; i++){
            tab[i] = rand()%100;
            cout << tab[i] << " ";
        }

        triTabDecrois(tab,taille);

    }
    else{
        cout << "Veuillez saisir une reponse valide." ;
    }

    
    
    

}
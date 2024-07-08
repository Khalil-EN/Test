#include <iostream>
#include <map>
#include <string>
#include <list>


using namespace std;

int main(){
    map<string,string>dict; // Dictionnaire. Map sont implemente coomme les AVL (black-red trees en java).

    dict.insert(pair<string,string>("Khalil","En")); // inserer les cles et les valeurs dans le dictionnaire
    dict.insert(pair<string,string>("Nounou","2ostora"));
    dict.insert(pair<string,string>("Abo","Lobaida"));


    dict["Nounou"]="2ostoooora"; // Modifier la valeur d'une cle

    //dict.clear(); // Supprimer le contenu du dictionnaire

    dict.erase("Abo"); // Supprime une cle du dictionnaire

    cout << "La taille du dictionnaire est : " << dict.size() << endl; 

    for(auto pair:dict){ // equivalent a for pair in dict
        cout << pair.first << "-" << pair.second << endl; // first recupere keys, second recupere values
    } // Print les elements du dictionnaire en ordre alphabetique des cles du dictionnaire. Pour afficher les elements selon l'ordre dont ils ont ete insere, il faut utiliser unordered_map

    map<string, list<int>>dict2;

    list<int>note1{12,18};
    list<int>note2{17,17};
    dict2.insert(pair<string,list<int>>("Oussama",note1));
    dict2.insert(pair<string,list<int>>("Ahmed",note2));

    dict2["Oussama"]={18,18,19};

    for(auto pair : dict2){
        cout << pair.first << "-";
        for(auto values : pair.second){
            cout << values << ", ";
        }
        cout << endl;
    }
}
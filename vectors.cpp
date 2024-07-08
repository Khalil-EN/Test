#include <iostream>
#include <vector> // sophisticated dynamic arrays (no memory management needed)

using namespace std;

int main(){
    vector<int> vecteur;

    for(int i=0; i<10; i++){
        vecteur.push_back(i);
    }

    for (auto it=vecteur.begin(); it!=vecteur.end(); it++){ // iterations (it) is a pointer that point to the beginning of the vector (begin()) and to its end (end())
        cout << *it << " - ";
    }
    cout << endl;
    for(auto element:vecteur){ // other way to print the elements of the vector
        cout << element << " - ";
    }
    cout << endl;
    cout << "La taille du vecteur est : " << vecteur.size() << endl;
    cout << "La taille maximale du vecteur est : " << vecteur.max_size() << endl;
    cout << "La capacite du vecteur est : " << vecteur.capacity() << endl;
    if(vecteur.empty()){
        cout << "Le vecteur est vide" << endl;
    }else{
        cout << "Le vecteur n'est pas vide" << endl;
    }
    vecteur.resize(9);
    cout << "La taille du vecteur est : " << vecteur.size() << endl;
    cout << "Le premier element du vecteur est : " << vecteur.front() << endl;
    cout << "Le dernier element du vecteur est : " << vecteur.back() << endl;
    cout << "L'element qui se trouve au milieu du vecteur est : " << vecteur.at(5) << endl;
    cout << "Le deuxieme element du vecteur est : " << vecteur[2] << endl;

    vecteur.insert(vecteur.begin()+2, 100);
    vecteur.insert(vecteur.end()-2, 102);
    vecteur.erase(vecteur.end()); // =pop for stack

    for(int i=0; i<vecteur.size(); i++){
        cout << vecteur[i] << " - ";
    }
    cout << endl;
    
}
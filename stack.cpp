#include <iostream>
#include <stack>

using namespace std;


void printstack(stack<int>stack){
    while(!stack.empty()){
        cout << stack.top() << endl; // La fonction top recupere le dernier element de la pile
        stack.pop();
    }
}

int main(){
    stack<int>pile; // Creation d'une pile d'entiers

    //Pour inserer un element dans la pile, la fonction push est utilisee

    pile.push(143);
    pile.push(98);

    pile.pop(); // Supprime le dernier element de la pile

    printstack(pile);

    // Pour verifier si la pile est vide ou non, on utlise la fonction empty
    if(pile.empty()){
        cout << "La pile est vide" << endl;
    }
    else{
        cout << "La pile n'est pas vide" << endl;
    }
    // Pour savoir la taille de la pile, la fonction size est utilisee
    cout << "La taille de la pile est : " << pile.size() << endl;
    return 0;
}
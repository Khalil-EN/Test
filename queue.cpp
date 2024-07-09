#include <iostream>
#include <queue>


using namespace std;

void printfile(queue<int>file){
    while(file.size()!=0){ // Or !file.empty()
        cout << file.front() << endl;
        file.pop();
    }
}

int main(){
    queue<int>file;
    file.push(4); // Ajouter un element a la file (au back)
    file.push(87);
    file.push(12);
    file.pop(); // Eliminer le premier element de la file

    cout << "Le premier element de la file est : " << file.front() << endl; // Retourne le premier element de la file

    cout << "Le dernier element de la file est : " << file.back() << endl; // Retourne le dernier element de la file

    cout << "La taille de la file est : " << file.size() << endl; // Retourne la taille de la file

    printfile(file);


}
#include <iostream>
#include <set>
//#include <string>

using namespace std;

int main(){
    string sentence="My name is Khalil";
    string sentence2="Nounou bassel";
    set<char> unique;
    
    for(int i=0;i<sentence2.length();i++){
        unique.insert(sentence2[i]);
    }
    unique.erase('N');
    for(auto it=unique.begin();it!=unique.end();it++){
        cout << *it << " - ";
    }
    cout << endl;
    if(unique.find('J')==unique.end()){
        cout << "Element not found" << endl;
    }else{
        cout << "Element found" << endl;
    }   
}
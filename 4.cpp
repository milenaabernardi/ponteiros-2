#include <iostream>
using namespace std;

void contarVogais(string palavra, int *p){
    for(int i=0; i<palavra.length(); i++){
        switch(palavra[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                *p+=1;
        }
    }
}

int main(){
    string palavra;
    int p=0;
    cin >> palavra;
    contarVogais(palavra, &p);
    cout << p;
}
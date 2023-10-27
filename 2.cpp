#include <iostream>
using namespace std;

int main(){
    int tam;
    int *p;
    cin >> tam;
    int v[tam];
    for(int i=0; i<tam; i++){
        cin >> v[i];
    }
    for(int i=0; i<tam; i++){
        *p = v[i];
        cout << *p << " ";
    }
}
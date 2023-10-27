#include <iostream>
using namespace std;

void dobrar(int *num){
    (*num)*=2;
}

int main(){
    int *num, pao;
    cin >> pao;
    num = &pao;
    dobrar(num);
    cout << *num;
}
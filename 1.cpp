#include <iostream>
using namespace std;

int main(){
    int *p;
    int num1, num2, soma;
    cin >> num1 >> num2;
    soma = num1 + num2;
    *p=soma;
    num1 = *p - num1;
    num2 = *p - num2;
    cout << "numero 1: " << num1 << endl << "numero 2: " << num2;
}
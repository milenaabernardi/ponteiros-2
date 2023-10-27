#include <iostream>
using namespace std;

void inverter(string *palavra){
    string invertida;
    for(int i=(*palavra).length(); i>=0; i--){
        invertida += (*palavra)[i];
    }
    *palavra = invertida;
}

int main(){
    string palavra;
    int p;
    cin >> palavra;
    inverter(&palavra);
    cout << palavra;
}
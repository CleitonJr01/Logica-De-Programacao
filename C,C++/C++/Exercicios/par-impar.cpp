#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    char sn;

    do{
        cout << "Digite um numero: ";
        cin >> x;
        if (x % 2 == 0){
            cout << "PAR\n";
        }else{
            cout << "IMPAR\n";
        }
        
        cout << "Deseja continuar(s/n)?: ";
        cin >> sn;
    } while (sn == 's');
    

    return 0;
}
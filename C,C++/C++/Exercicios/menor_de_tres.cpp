#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,i,menor;

    cout << "Quantos numeros serao digitados: ";
    cin >> N;

    int vet[N];

    for (i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    
    menor = vet[1];

    for (i = 0; i < N; i++){
        if (vet[i] < menor){
            menor = vet[i];
        }
    }
    
    cout << "MENOR = " << menor;

    return 0;
}
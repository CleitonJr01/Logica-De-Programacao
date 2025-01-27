#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,i,contador;
    double somaalt,medalt,medid;
    cout << "Quantas pessoas serao digitadas?: ";
    cin >> N;

    int idade[N];
    double altura[N];
    string nome[N];

    for (i = 0; i < N; i++){
        cout << "Dados da " <<i+1<<"a. pessoa: \n";
        cout << "NOME: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin,nome[i]);
        cout << "IDADE: ";
        cin >> idade[i];
        cout << "ALTURA: ";
        cin >> altura[i];
    }
    
    somaalt= 0;
    for (i = 0; i < N; i++){
        somaalt = somaalt + altura[i];
    }
    medalt = somaalt/N;
    
    cout << fixed << setprecision(2) << "\nAltura media: " << medalt << endl;

    contador = 0;
    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            contador = contador + 1;
        }
    }
    medid = ((double)contador/N) * 100;
    cout << fixed << setprecision(1) << "Pessoas com menos de 16 anos: " << medid << "%" <<endl;
    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            cout << nome[i] << "\n";
        }
    }
    

    return 0;
}
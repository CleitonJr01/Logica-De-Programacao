#include <bits/stdc++.h>

using namespace std;

int main(){

    int idade1,idade2;
    double salario1,salario2;
    char genero1,genero2;
    string nome1,nome2;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Genero da primeira pessoa: ";
    cin >> genero1;
    cout << "Idade da primeira pessoa: ";
    cin >> idade1;
    cout << "Salario da primeira pessoa: ";
    cin >> salario1;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Genero da segunda pessoa: ";
    cin >> genero2;
    cout << "Idade da segunda pessoa: ";
    cin >> idade2;
    cout << "Salario da segunda pessoa: ";
    cin >> salario2;

    cout << fixed << setprecision(2);
    cout << "\nNOME 1: " << nome1 << endl;
    cout << "IDADE 1: " << idade1 << endl;
    cout << "GENERO 1: " << genero1 << endl;
    cout << "SALARIO 1: " << salario1 << endl;
    
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "NOME 2: " << nome2 << endl;
    cout << "IDADE 2: " << idade2 << endl;
    cout << "GENERO 2: " << genero2 << endl;
    cout << "SALARIO 2: " << salario2 << endl;

    return 0;
}
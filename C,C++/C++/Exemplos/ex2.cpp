#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

int idade;
double altura,salario;
char genero;
string nome;

idade = 17;
altura = 1.70;
salario = 1300.0;
genero = 'M';
nome = "Cleiton";

cout << fixed << setprecision(2);
cout << "IDADE = " << idade << endl;
cout << "ALTURA = " << altura << endl;
cout << "SALARIO = " << salario << endl;
cout << "GENERO = " << genero << endl;
cout << "NOME = " << nome << endl;

    return 0;
}
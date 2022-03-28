// C02EX02.cpp // usando std de modo geral

#include <iostream>

using namespace std;

int main(void)
{
    char NOME[40], SOBRENOME[40];

    cout << "Informe seu nome: "; // operador de exmação
    cin >> NOME; // << operador de inserção
    cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

    cout << "Informe seu sobrenome: "; // operador de exmação
    cin >> SOBRENOME; // << operador de inserção
    cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

    cout << "Ola, " << NOME << " " << SOBRENOME;
    cout << endl; // :: operador de escopo

    cout << "Tecle <enter> para encerrar...";
    cin.get();
    return (0);
}

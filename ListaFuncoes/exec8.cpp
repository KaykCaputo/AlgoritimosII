#include <iostream>

using namespace std;

void drawHeader(string);

int main()
{
    drawHeader("André Gustavo");
    return 0;
}

void drawHeader(string name)
{
    cout << "== == == == == == == == == == == == == == == == == == == == == ==" << endl;
    cout << "UNIVALI - POLITECNICA - Ciência da Computação" << endl;
    cout << "Disciplina Algoritmo e Programação 2per" << endl;
    cout << "Nome: " << name << endl;
    cout << "== == == == == == == == == == == == == == == == == == == == == ==" << endl;
}
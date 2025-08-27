#include <iostream>
#include <cstdlib> // atoi, atof
#include <string>  // string
#include <cctype>  // isdigit
using namespace std;
int main()
{
    string info;
    float n;
    int x;
    unsigned int i, ponto;
    bool validada;
    do
    {
        validada = true; // p/ ver se tem erro, considera valida inicialmente
        cout << "Numero int: ";
        getline(cin, info); // ler string!!!
        if (info == "")     // se for string vazia
            validada = false;
        else if (not isdigit(info[0]) and info[0] != '-') // se nao for digito/sinal
            validada = false;
        else
            for (i = 1; i < info.length(); i++) // varre demais posicoes
                if (not isdigit(info[i]))
                { // se nao for digito
                    validada = false;
                    break;
                }
        if (not validada)
            cout << "Numero invalido, digite novamente." << endl;
    } while (not validada);
    x = atoi(info.c_str());          // faz conversao pq entrada foi correta
    cout << "Inteiro " << x << endl; // mostra valor
    do
    {
        validada = true;
        ponto = 0;
        cout << "Numero float: ";
        getline(cin, info); // ler string!!!
        if (info == "")     // se for string vazia
            validada = false;
        else if (not isdigit(info[0]) and info[0] != '-') // se nao for digito/sinal
            validada = false;
        else
            for (i = 1; i < info.length(); i++) // varre demais posicoes
                if (not isdigit(info[i]))
                { // se nao for digito
                    // verifica se eh ponto com um digito antes
                    if (isdigit(info[i - 1]) and info[i] == '.' and ponto == 0)
                        ponto++; // permite um ponto apenas
                    else
                    {
                        validada = false;
                        break;
                    }
                }
        if (not validada)
            cout << "Numero float invalido, digite novamente." << endl;
    } while (not validada);
    n = atof(info.c_str());
    cout << "Float: " << n << endl;
    string nome, sobrenome, nomecompleto;
    do
    {
        validada = true;
        cout << "Nome: ";
        getline(cin, info);
        if (info == "") // se for string vazia
            validada = false;
        for (i = 0; i < info.length(); i++) // varre letra a letra
            if (not isalpha(info[i]) and info[i] != ' ')
                validada = false; // erro se nao eh letra do alfabeto nem branco
        if (not validada)
            cout << "Entrada invalida, digite novamente" << endl;
    } while (not validada);
    nome = info; // copia entrada para a variavel nome
    do
    {
        validada = true;
        cout << "Sobrenome: ";
        getline(cin, info);
        if (info == "") // se for string vazia
            validada = false;
        for (i = 0; i < info.length(); i++) // varre letra a letra
            if (not isalpha(info[i]) and info[i] != ' ')
                validada = false; // erro se nao eh letra do alfabeto nem branco
        if (not validada)
            cout << "Entrada invalida, digite novamente" << endl;
    } while (not validada);
    sobrenome = info; // copia entrada para a variavel sobrenome
    nomecompleto = nome + " " + sobrenome;
    cout << "Nome completo: " << nomecompleto << endl;
    return 0;
}

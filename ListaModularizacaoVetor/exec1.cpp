// Faça um programa que leia o nome e a nota da prova I de uma turma de n(1 < n > 20)
// estudantes, e armazene as informações em vetores.Ao final apresente o nome dos
// estudantes cuja nota é maior do que a média da turma e determine também quantos
// estudantes obtiveram nota abaixo da média da turma.

#include <iostream>
#include <cctype>

using namespace std;

float ReadFloatValue();
float GetAverageGrade(float[], unsigned);
void ShowBetterThenAverageStudents(float[], string[], unsigned, float);
unsigned ReadIntValues();
string ReadStudentName();

int main()
{
    unsigned int num;
    float average_grade;

    cout << "Insira o numero de alunos: " << endl;
    num = ReadIntValues();

    string names[num];
    float grades[num];

    for (unsigned int i = 0; i < num; ++i)
    {
        names[i] = ReadStudentName();
        grades[i] = ReadFloatValue();
    }

    average_grade = GetAverageGrade(grades, num);

    ShowBetterThenAverageStudents(grades, names, num, average_grade);

    return 0;
}

float ReadFloatValue()
{
    float num = 0;
    string str;
    bool valid = false;

    do
    {
        cout << "Insira a nota do aluno: " << endl;
        cin >> str;
        valid = true;
        for (unsigned int i = 0; i < str.size(); ++i)
        {
            if (!isdigit(str[i]) && str[i] != '.' && str[i] != ',')
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            num = stof(str);
            if (num > 10 || num < 0)
            {
                valid = false;
            }
        }
        if (!valid)
        {
            cout << "Insira um numero valido!" << endl;
        }
    } while (!valid);

    return num;
}

unsigned ReadIntValues()
{
    unsigned int num = 0;
    string str;
    bool valid = false;

    do
    {
        cin >> str;
        valid = true;
        for (unsigned int i = 0; i < str.size(); ++i)
        {
            if (!isdigit(str[i]))
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            num = stoi(str);
            if (num > 20 || num < 0)
            {
                valid = false;
            }
        }
        if (!valid)
        {
            cout << "Insira um numero valido!" << endl;
        }
    } while (!valid);

    return num;
}

string ReadStudentName()
{
    bool valid = false;
    string str;
    do
    {
        cout << "Insira o nome do aluno: " << endl;
        cin >> str;
        valid = true;
        for (unsigned int i = 0; i < str.size(); ++i)
        {
            if (!isalpha(str[i]))
            {
                valid = false;
                break;
            }
        }
        if (!valid)
        {
            cout << "Insira um nome valido!" << endl;
        }
    } while (!valid);

    return str;
}

float GetAverageGrade(float grades[], unsigned int n)
{
    float sum = 0;
    for (unsigned int i = 0; i < n; ++i)
    {
        sum += grades[i];
    }
    return sum / n;
}

void ShowBetterThenAverageStudents(float grades[], string students[], unsigned int n, float average_grade)
{

    int bad_students_count = 0;

    cout << "Alunos acima da média: " << endl;
    for (unsigned int i = 0; i < n; ++i)
    {
        if (grades[i] >= average_grade)
        {
            cout << "\tAluno: " << students[i] << " Nota: " << grades[i] << endl;
            continue;
        }
        bad_students_count++;
    }
    cout << "Alunos abaixo da média: " << bad_students_count << endl;
}
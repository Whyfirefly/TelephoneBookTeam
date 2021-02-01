#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


using namespace std;
void SaveToFile(const Persona people[], int num_people)
{
    ofstream fout;

    fout.open(PHONEBOOK_FILENAME.c_str());

    for(int i = 0; i < num_people; i++)
    {
        fout << people[i].firstname << " ";
        fout << people[i].lastname << " ";
        fout << people[i].patronymic << endl;
        fout << people[i].phone << endl;
        fout << people[i].group << endl;
    }

}
// Сохраняем все контакты в файле
// [in] people - Массив для записи в файл
// [in] num_people - Кол-во контактов в массиве
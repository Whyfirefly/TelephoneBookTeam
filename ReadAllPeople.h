#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "Persona.h"

// Максимальное число возможно вносимых контактов - размер массива
const int MAX_NAMES = 100;

// Имя файла, который будет содержать контакты
const string PHONEBOOK_FILENAME = "phonebook.csv";

using namespace std;
void ReadAllPeople(Persona people[], int &num_people)
{
    ifstream fin;
    fin.open(PHONEBOOK_FILENAME.c_str(), ios::app);
    if (fin.fail())
    {
        cout << "Файл не открывается." << PHONEBOOK_FILENAME << endl;
        return;
    }

    int i = 0;
    getline(fin, people[i].firstname);
    getline(fin, people[i].lastname);
    getline(fin, people[i].patronymic);

    while (!fin.eof() && i < MAX_NAMES)
    {
        getline(fin, people[i].phone);

        i++;

        if (i < MAX_NAMES)
            getline(fin, people[i].firstname);
        getline(fin, people[i].lastname);
        getline(fin, people[i].patronymic);
    }

    num_people = i;

    fin.close();
}
// Считываем все контакты из файла (это как импорт данных в систему из файла)
// [out] people - Массив, который содержит все контакты
// [out] num_people - Количество контактов в файле
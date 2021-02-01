#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;
void AddName(Persona people[], int &num_people)
{
    Persona person;
    short int groupTemp;

    cout <<"\nВведите имя: ";
    getline(cin, person.firstname);

    cout <<"Введите фамилию: ";
    getline(cin, person.lastname);

    cout <<"Введите отчество: ";
    getline(cin, person.patronymic);

    cout <<"Введите номер телефона: ";
    getline(cin, person.phone);


    cout << "Выберите группу, к которой человек относится\n(1 - семья, 2 - друзья, 3 - коллеги) - "; cin >> groupTemp;
    if (groupTemp == 1) {
        person.group = Groups::family;
    }
    else if (groupTemp == 2) {
        person.group = Groups::friends;
    }
    else if (groupTemp == 3) {
        person.group = Groups::collega;
    }

    for(int i = 0; i < num_people; i++)
    {
        if( i + 1  == num_people)
            people[num_people] = person;
    }
    num_people++;

}
// Добавляем ФИО, телефона и группы
// в массив, затем сохраняем контакт ,используя функцию AppendToFile.
// [in/out] people - Массив для добавления нового контакта
// [in/out] num_people - Кол-во внесенных контактов
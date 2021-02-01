
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


using namespace std;

void ListAllNames(const Persona people[], int num_people) {
    cout << "\n\nСписок контактов: \n";
    for (int i = 0; i < num_people; i++)
        cout << "Группа: " << people[i].group << endl << "ФИО:\n" << people[i].firstname << " " << people[i].lastname << " " << people[i].patronymic << " - "
             << people[i].phone << endl;
}
// Отображение всех контактов
// [in] people - Массив, содержащий контакты
// [in] num_people - кол-во людей в массиве

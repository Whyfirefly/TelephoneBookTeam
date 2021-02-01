#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


using namespace std;
void FindName(Persona people[], int num_people) {

    Persona person;
    int count;

    cout << "Введите имя контакта, которого хотите найти: ";
    getline(cin, person.firstname);

    for (count = 0; count < num_people; count++) {
        if (people[count].Matches(person.firstname)) {
            cout << endl << people[count].firstname << " " << people[count].lastname << " " << people[count].patronymic << endl;
            cout << "Группа: " << people[count].group;
            cout << "Номер: " << people[count].phone;
        }
    }
}
// Поиск контакта и показ всех контактов
// из массива
// [in] people - Массив, содержащий контакты
// [in] num_people - кол-во людей в массиве

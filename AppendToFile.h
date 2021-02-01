#include <iostream>
#include <fstream>
#include <string>
#include <cctype>



using namespace std;
void AppendToFile(Persona person) {
    ofstream fin;
    fin.open(PHONEBOOK_FILENAME.c_str(), ios::app);

    fin << person.firstname << endl;
    fin << person.lastname << endl;
    fin << person.patronymic << endl;
    fin << person.phone << endl;
    fin << person.group << endl;

    fin.close();
}

// Добавление контакта в тел книгу
// [in] person - Контакт,который доьавляем в файл
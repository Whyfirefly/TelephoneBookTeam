#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


using namespace std;
void ChangePhone(Persona people[], int num_people)
{
    Persona person;
    int count;

    cout <<"Введите имя человека, телефонный номер которого хотите изменить: ";
    getline(cin, person.firstname);

    for(count = 0; count < num_people; count++)
    {
        if(people[count].Matches(person.firstname))
        {	cout << endl << people[count].firstname << endl;

            cout <<"Текущий номер: "<<people[count].phone;

            cout << "\nВведите новый номер: ";
            getline(cin, people[count].phone);

            return;
        }

    }

    if(count = num_people)
        cout <<"\nИмя не найдено.";

}
// Изменение контакта, поиск в массиве и
// изменение номера телефона. Затем сохраняем новые данные в файл
// используя вызов функции SaveToFile.
// [in/out] people - Массив, содержащий контакты
// [in]	 num_people - Кол-во людей в массиве

#include <string>
#include <iostream>

using namespace std;


enum Groups
{
    family, friends, collega
};

struct Persona
{
    string firstname;
    string lastname;
    string patronymic;
    string phone;
    Groups group;

    bool Matches(string x)
    {
        return (firstname.find(x) != string::npos);
    }

};
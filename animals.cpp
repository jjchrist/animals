#include <iostream>
#include <windows.h>
#include <string>
#include "header.h"

using namespace std;

int chosen_number;

void menu()
{
    cout << "   МЕНЮ\n"
        << "(0) Выход из программы. \n"
        << "(1) Добавление новых элементов. \n"
        << "(2) Удаление элементов. \n"
        << "(3) Редактирование элементов. \n"
        << "(4) Сортировка элементов. \n"
        << "(5) Вывод информации. \n"
        << "Выбор: \n";
    cin >> chosen_number;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    List* animal_list = new List;
    animal_list->Print();

    string animal;
    int weight, age;

    cout << "Введите название, продолжительность жизни и вес животного: " << endl;
    getline(cin, animal);
    cin >> age >> weight;
    animal_list->Add(animal, age, weight);
    animal_list->Print();
    return 0;
}

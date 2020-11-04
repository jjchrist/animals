#include <iostream>
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

void main()
{
    setlocale(LC_ALL, "RUS");


}

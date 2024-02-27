#include "Header.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    NOTE record;
    cout << "Введіть призвище та ім'я" << endl;
    cin >> record.Name;
    cout << "Введіть номер телефону" << endl;
    cin >> record.Mobile;
    cout << "Введіть адрес" << endl;
    cin >> record.Address;
    writeDataToFile(record, "notes.txt");

    displayAllRecords("notes.txt");
    string MobileSearch;
    cout << "Введіть номер для пошуку: ";
    cin >> MobileSearch;
    displayInfoByMobile(MobileSearch, "notes.txt");
}
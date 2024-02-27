#include "Header.h"
#include <fstream>
#include <iostream>

void writeDataToFile(const NOTE& record, const string& Name)
{
    ofstream file(Name, ios::app);
    if (file.is_open()) {
        file << record.Name << "\t" << record.Mobile << "\t" << record.Address << endl;
        file.close();
        cout << "Дані успрішно записані у файл" << endl;
    }
    else {
        cout << "Помилка відриття файлу для запису" << endl;
    }
};
void displayInfoByMobile(const string& Mobile, const string& Name) {
    ifstream file(Name);
    if (file.is_open()) {
        bool found = false;
        string line;
        NOTE record;
        while (file >> record.Name >> record.Mobile >> record.Address) {
            if (record.Mobile == Mobile)
            {
                found = true;
                cout << "Інформація про людину з номером телефону " << Mobile << ":" << endl;
                cout << record.Name << "\t" << record.Mobile << "\t" << record.Address << endl;
            }

        }
        file.close();
        if (!found) {
            cout << "Запис з номером телефону " << Mobile << " не знайдено." << endl;
        }
    }
    else {
        cerr << "Помилка відкриття файлу для читання." << endl;
    }
};
void displayAllRecords(const string& Name) {
    ifstream file(Name);
    if (file.is_open()) {
        cout << "Усі записи з файлу:" << endl;
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cerr << "Помилка відкриття файлу для читання." << endl;
    }
};

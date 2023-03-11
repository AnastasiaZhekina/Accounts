#include <iostream>
#include <string>
using namespace std;

struct account {
    int number ;
    string name ;
    int balance ;
};

int main()
{ 
    setlocale(LC_ALL, "Russian");

    account newac;

   cout << "Введите номер счёта: ";
   cin >> newac.number;

   cout << "Введите имя владельца: ";
   cin >> newac.name;

   cout << "Введите баланс: "; 
   cin >> newac.balance;

   cout << "Введите новый баланс: ";
   cin >> newac.balance; 

   cout << "Ваш счёт: " << newac.name << ", " << newac.number << ", " << newac.balance << endl;
}


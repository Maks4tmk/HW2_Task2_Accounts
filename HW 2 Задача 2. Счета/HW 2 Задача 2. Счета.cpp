// HW 2 Задача 2. Счета.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>

struct Bank_Account
{
    int Number;
    std::string First_name;
    int Balance;
};

void New_Balance(Bank_Account& Client, int New_n) {
    Client.Balance = New_n;
}

void Print(Bank_Account& Client) {
    std::cout << "Ваш счёт: " << Client.First_name << " " << Client.Number << " " << Client.Balance;
}

int main()
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Bank_Account Client;
    int New_b = 0;

    std::cout << "Введите номер счёта: ";
    std::cin >> Client.Number;

    std::cout << "Введите имя владельца: ";
    std::cin >> Client.First_name;

    std::cout << "Введите баланс: ";
    std::cin >> Client.Balance;

    std::cout << "Введите новый баланс: ";
    std::cin >> New_b;
    New_Balance(Client, New_b);

    Print(Client);

}

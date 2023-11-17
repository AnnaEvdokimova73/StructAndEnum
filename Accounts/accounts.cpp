#include <iostream>

struct BankAccount
{
    std::string nameOwener;
    int numbAccount;
    double balance;
};

void setNewBalance(BankAccount& bankAccount, double newBalance)
{
    bankAccount.balance = newBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    BankAccount bankAccount;
    double newBalance;

    std::cout << "Введите номер счёта:\t";
    std::cin >> bankAccount.numbAccount;
    std::cout << "Введите имя владельца:\t";
    std::cin >> bankAccount.nameOwener;
    std::cout << "Введите баланс:\t";
    std::cin >> bankAccount.balance;
    std::cout << "Введите новый баланс:\t";
    std::cin >> newBalance;
    setNewBalance(bankAccount, newBalance);
    std::cout << "Ваш счет:\t" << bankAccount.nameOwener  << ", " << bankAccount.numbAccount << ", " << bankAccount.balance << std::endl;
}


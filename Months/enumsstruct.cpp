#include <iostream>

enum Months 
{
    Goodbye,
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

std::string getMonthName(int number)
{
    Months month = static_cast<enum Months>(number);
    switch (month)
    {
    case Months::Goodbye:
        return "До свидания";
    case Months::January:
        return "Январь";
    case Months::February:
        return "Февраль";
    case Months::March:
        return "Март";
    case Months::April:
        return "Апрель";
    case Months::May:
        return "Май";
    case Months::June:
        return "Июнь";
    case Months::July:
        return "Июль";
    case Months::August:
        return "Август";
    case Months::September:
        return "Сентябрь";
    case Months::October:
        return "Октябрь";
    case Months::November:
        return "Ноябрь";
    case Months::December:
        return "Декабрь";
    default:
        return "Неправильный номер!";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Months month;

    int monthNumb = -1;
    while (monthNumb != 0)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNumb;
        std::cout << getMonthName(monthNumb) << std::endl;
    } 


}
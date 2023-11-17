#include <iostream>

struct Address 
{
    std::string city;
    std::string street;
    int house;
    int apart;
    int index;
};

void getAddress(const Address& addr)
{
    std::cout << "Город:\t" << addr.city << std::endl;
    std::cout << "Улица:\t" << addr.street << std::endl;
    std::cout << "Номер дома:\t" << addr.house << std::endl;
    std::cout << "Номер квартиры:\t" << addr.apart << std::endl;
    std::cout << "Индекс:\t" << addr.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Address address;
    address.city = "Москва";
    address.street = "Арбат";
    address.house = 12;
    address.apart = 8;
    address.index = 123456;
    getAddress(address);
}

#include <iostream>

int main()
{
    int ano;
    std::cin >> ano;
    if (2021-ano >= 16) std::cout << "Pode votar.";
    else std::cout << "Não pode votar.";

    return 0;
}
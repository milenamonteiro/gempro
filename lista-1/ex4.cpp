#include <iostream>

int main()
{
    int ano;
    std::cout << "Digite o ano de nascimento: ";
    std::cin >> ano;
    if (2021-ano >= 16) std::cout << "Pode votar.";
    else std::cout << "Não pode votar.";

    return 0;
}

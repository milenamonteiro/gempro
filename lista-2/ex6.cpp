#include <iostream>

int main()
{
    int num = 1;
    while (num > 0) {
        std::cout << "Digite um número negativo: ";
        std::cin >> num;
        if (num > 0) std::cout << "Errado. Tente novamente.\n";
    }
}

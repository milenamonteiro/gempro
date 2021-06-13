#include <iostream>

int main()
{
    double n1, n2;
    std::cout << "Digite as duas notas: ";
    std::cin >> n1 >> n2;
    double media = (n1 + n2)/2;

    if (media <= 4)
        std::cout << "Média: " << media << "\nSituação: Reprovado";
    else if (media >= 4.1 && media <= 7)
        std::cout << "Média: " << media << "\nSituação: Exame";
    else if (media >= 7.1 && media <= 10)
        std::cout << "Média: " << media << "\nSituação: Aprovado";

    return 0;
}

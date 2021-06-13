#include <iostream>

int main()
{
    double a, b, c, me;
    std::cout << "Digite as 3 notas e a média dos exercícios: ";
    std::cin >> a >> b >> c >> me;
    double ma = (a * 1 + b * 2 + c * 3 + me)/7;

    if (ma >= 9) std::cout << "Conceito recebido: A";
    else if (ma >= 7.5 && ma < 9.0) std::cout << "Conceito recebido: B";
    else if (ma >= 6.0 && ma < 7.5) std::cout << "Conceito recebido: C";
    else std::cout << "Conceito recebido: D";

    return 0;
}

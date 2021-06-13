#include <iostream>

int main()
{
    double a, b, c;
    std::cout << "Digite 3 valores para verificar se eles correspondem aos lados de um triângulo retângulo: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        if (b*b + c*c == a*a) std::cout << "É triângulo retângulo";
        else std::cout << "Não triângulo retângulo";
    }
    else if (b >= a && b >= c) {
        if (a*a + c*c == b*b) std::cout << "É triângulo retângulo";
        else std::cout << "Não triângulo retângulo";
    }
    else {
        if (b*b + a*a == c*c) std::cout << "É triângulo retângulo";
        else std::cout << "Não triângulo retângulo";
    }
    
    return 0;
}

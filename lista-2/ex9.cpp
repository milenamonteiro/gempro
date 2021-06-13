#include <iostream>
#include <cmath>

void bhaskara(double a, double b, double c) {
    double delta = b*b-4*a*c;
    double r1 = (-b + sqrt(delta))/(2*a);
    double r2 = (-b - sqrt(delta))/(2*a);
    std::cout << a << "x^2 + " << b << "x + " << c << "\n";
    if (delta > 0) {
        std::cout << "Tem duas raízes, " << r1 << " e " << r2 << "\n";
    }
    else if (delta == 0) {
        std::cout << "Tem uma raíz, " << r1 << "\n";
    }
    else {
        std::cout << "Não tem raízes reais" << "\n";
    }
}

int main()
{
    double a, b, c;
    std::cout << "Digite três valores de uma equação do 2º grau: ";
    std::cin >> a >> b >> c;
    bhaskara(a, b, c);
    bhaskara(a, c, b);
    bhaskara(b, c, a);
    bhaskara(b, a, c);
    bhaskara(c, b, a);
    bhaskara(c, a, b);
    return 0;
}

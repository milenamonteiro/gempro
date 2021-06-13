#include <iostream>

int main()
{
    double peso, altura;
    std::cin >> peso >> altura;
    double imc = peso/altura * altura;

    if (imc < 20)
        std::cout << "Abaixo do normal";
    else if (imc >= 20 && imc < 25)
        std::cout << "Normal";
    else if (imc >= 25 && imc < 30)
        std::cout << "Sobrepeso";
    else if (imc >= 30 && imc < 35)
        std::cout << "Obesidade leve";
    else if (imc >= 35 && imc < 40)
        std::cout << "Obesidade moderada";
    else
        std::cout << "Obesidade mórbida";

    return 0;
}
#include <iostream>

int main()
{
    double peso, altura;
    std::cout << "Digite o peso e a altura para calcular o IMC: ";
    std::cin >> peso >> altura;
    double imc = peso/(altura * altura);

    if (imc < 20)
        std::cout << "IMC: " << imc << "\nGrau: Abaixo do normal";
    else if (imc >= 20 && imc < 25)
        std::cout << "IMC: " << imc << "\nGrau: Normal";
    else if (imc >= 25 && imc < 30)
        std::cout << "IMC: " << imc << "\nGrau: Sobrepeso";
    else if (imc >= 30 && imc < 35)
        std::cout << "IMC: " << imc << "\nGrau: Obesidade leve";
    else if (imc >= 35 && imc < 40)
        std::cout << "IMC: " << imc << "\nGrau: Obesidade moderada";
    else
        std::cout << "IMC: " << imc << "\nGrau: Obesidade mórbida";

    return 0;
}

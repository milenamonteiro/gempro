#include <cmath>
#include <iostream>

int main()
{
    int a, b, c, x, delta;
    double valor;

    std::cout << "Escolha uma opção, para todos será necessário digitar em seguida 3 números referentes à escolha feita\n"
              << "1: Calcular equação de 2º grau\n"
              << "2: Verificar se 3 valores formam lados de um triângulo\n"
              << "3: Calcular a área de um trapézio\n"
              << "4: Calcular a resistência equivalente de associações em série e em paralelo\n";
    std::cin >> x >> a >> b >> c;

    switch (x)
    {
    case 1:
        delta = b*b-4*a*c;
        if (delta >= 0) {
            std::cout << "As raízes são ";
            std::cout << (-b + sqrt(delta))/(2*a) << " e ";
            std::cout << (-b - sqrt(delta))/(2*a);
        }
        else std::cout << "Não tem raízes reais.";
        break;
    
    case 2:
        // soma dos dois lados de um triângulo é maior
        // que o terceiro, para todos os lados
        if (a + b > c && b + c > a && c + a > b)
            std::cout << "Forma um triângulo.";
        else std::cout << "Não forma um triângulo.";
        break;
    
    case 3:
        if (a > 0 && b > 0 && c > 0) {
            valor = ((a+b)*c)/2;
            std::cout << "A área é: " << valor;
        }
        else std::cout << "Não dá pra formar um trapézio.";
        break;
    
    case 4:
        if (a > 0 && b > 0 && c > 0) {
            valor = (1/a) + (1/b) + (1/c);
            valor = 1/valor;
            std::cout << "Resistência para associação em série: " << a+b+c
                      << "\nResistência para associação em paralelo: " << valor;
        }
        else std::cout << "Os valores inseridos não correspondem à resistências elétricas.";
        break;

    default:
        std::cout << "Insira uma opção válida.";
        break;
    }

    return 0;
}

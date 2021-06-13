#include <iostream>

int main()
{
    int cod;
    std::cout << "Digite o código do produto: ";
    std::cin >> cod;

    switch (cod)
    {
    case 1:
        std::cout << "Alimento não-perecível";
        break;

    case 2: case 3: case 4:
        std::cout << "Alimento perecível";
        break;

    case 5: case 6:
        std::cout << "Vestuário";
        break;
        
    case 7:
        std::cout << "Higiene Pessoal";
        break;
        
    case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        std::cout << "Limpeza e Utensílios Domésticos";
        break;
    
    default:
        std::cout << "Código inválido";
        break;
    }

    return 0;
}

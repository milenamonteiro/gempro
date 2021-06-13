#include <iostream>

int main()
{
    int matriz[5][5], valor, soma;
    for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
        valor = (rand() % 10) + 1;
        matriz[i][j] = valor;
        std::cout << matriz[i][j] << " ";
        if (j == 4) std::cout << "\n";
        if (i == j) soma += valor;
    }
    std::cout << "Soma dos números da diagonal principal: " << soma;
    return 0;
}
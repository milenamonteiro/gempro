#include <iostream>

int main()
{
    // Criar array
    int array[1000], valor;
    for (int i = 0; i < 1000; i++) {
        valor = (rand() % 1000) + 1;
        array[i] = valor;
    }
    int num;
    std::cout << "Valor a ser consultado na array: ";
    std::cin >> num;
    // Encontrar valor
    int count = 0;
    bool encontrado = false, fim = false;
    while (encontrado == false && fim == false) {
        if (array[count] == num)
            encontrado = true;
        if (count == 999)
            fim = true;
        count++;
    }
    if (encontrado)
        std::cout << "O valor existe na posição " << count;
    else
        std::cout << "O valor não existe na array.";
    return 0;
}

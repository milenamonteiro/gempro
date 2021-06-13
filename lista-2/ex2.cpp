#include <iostream>

int main()
{
    int num;
    std::cout << "Digite um termo da sequência de Fibonacci para receber o valor: ";
    std::cin >> num;

    // Já define os dois primeiros termos,
    // e no looping foca na soma.
    int termo1 = 0, termo2 = 1, soma;
    for (int i = 1; i < num; i++)
    {
        soma = termo1 + termo2; // Calcula o próximo termo
        termo1 = termo2; // Avança 1 termo na "lista"
        termo2 = soma; // Define a soma como o último termo
    }
    std::cout << "Valor do " << num << "º termo: " << termo1;
    
    return 0;
}

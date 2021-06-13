#include <iostream>

int main()
{
    int matriz[3][3], count = 1;
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
        matriz[i][j] = count;
        std::cout << matriz[i][j] << " ";
        if (j == 2) std::cout << "\n"; // quando chega no fim da linha
        count++; // vai de 1 a 9
    }

    return 0;
}

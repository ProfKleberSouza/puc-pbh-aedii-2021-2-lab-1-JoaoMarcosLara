
#include "functions.h"

int palindromo(char palavra[])
{
    int tamanho;
    tamanho = strlen(palavra);
    for (int i = 0; i < tamanho / 2; i++)  //só irá até o meio
    {
        if (palavra[i] != palavra[tamanho - i - 1])
        {
            return -1;
        }
    }
    return 1;
}
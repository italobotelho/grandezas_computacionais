//Conversão de grandezas operacionais
//Código criado para fins de aprendizagem

#include <stdio.h>

// Cabeçalho das funções
void decimal_to_bin(int num);
int decimal_to_hex(int num);
int bin_to_decimal(int num);
int bin_to_hex(int num);
int hex_to_decimal(int num);
int hex_to_bin(int num);

#include <stdio.h>

// A função agora é 'void', pois ela mesma vai imprimir o resultado
// em vez de retornar um número.
void decimal_to_bin(int num)
{
    if (num == 0) {
        printf("Binario: 0\n");
        return;
    }

    int bits[64];
    int cont = 0, quoc = num;
    
    while (quoc > 0)
    {
        bits[cont] = quoc % 2;
        quoc /= 2;
        cont++;
    }

    printf("Binario de %d é: ", num);
    for (int i = cont - 1; i >= 0; i--)
    {
        printf("%d", bits[i]);
    }
    printf("\n");
}

int main()
{
    decimal_to_bin(0);

    return 0;
}
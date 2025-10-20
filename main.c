//Conversão de grandezas operacionais
//Código criado para fins de aprendizagem

#include <stdio.h>
#include <math.h>
#include <windows.h>

// Cabeçalho das funções
void decimal_to_bin(int num);
void bin_to_decimal(long long num);
void decimal_to_hex(int num);
void hex_to_decimal(int num);
void bin_to_hex(long long num);
void hex_to_bin(int num);

// Função de Conversão de Decimal para Binário
void decimal_to_bin(int num)
{
    if (num == 0) {
        printf("Binario de 0 => 0\n");
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

    printf("Binario de %d => ", num);
    for (int i = cont - 1; i >= 0; i--)
    {
        printf("%d", bits[i]);
    }
    printf("\n");
}

// Função de Conversão de Binário para Decimal
void bin_to_decimal(long long num)
{
    int bit;
    long long quoc = num, decimal = 0;
    int i = 0;
    
    while (quoc > 0)
    {
        bit = quoc % 10;
        decimal += bit * (long long)pow(2, i);
        quoc /= 10;
        i++;
    }

    printf("Decimal de %lld => %d", num, decimal);
    printf("\n");
}

// Função Principal
int main()
{
    system("cls");
    decimal_to_bin(442325);
    bin_to_decimal(100100100000);

    return 0;
}
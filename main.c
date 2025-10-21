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

void decimal_to_hex(int num)
{
    char hex[64];
    int bit;
    int cont = 0, quoc = num;

    while (quoc > 0)
    {
        bit = quoc % 16;

        switch(bit)
        {
            case 10: hex[cont] = 'A'; break;
            case 11: hex[cont] = 'B'; break;
            case 12: hex[cont] = 'C'; break;
            case 13: hex[cont] = 'D'; break;
            case 14: hex[cont] = 'E'; break;
            case 15: hex[cont] = 'F'; break;
            default: hex[cont] = bit + '0'; break;
        }

        quoc /= 16;
        cont++;
    }

    printf("Hexadecimal de %d => ", num);
    for (int i = cont - 1; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }
    printf("\n");

}

// Função Principal - MAIN
int main()
{
    int valor;
    system("cls");

    printf("Qual o tipo de conversão você quer => ");
    decimal_to_bin(valor);
    bin_to_decimal(valor);
    decimal_to_hex(valor);

    return 0;
}
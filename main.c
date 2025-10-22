//Conversão de grandezas operacionais
//Código criado para fins de aprendizagem

#include <stdio.h>
#include <math.h>
#include <windows.h>

// Cabeçalho das funções
void menu();
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

// Função de Conversão de Decimal para Hexadecimal
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

// Função que exibe o Menu Principal
void menu()
{
    int opcao;
    printf("Qual grandeza voce quer converter?\n\n1. Decimal\t2. Binaria\t3. Hexadecimal\n\nDigite o numero que corresponde a opcao desejada\n\n=> ");
    scanf("%d", &opcao);
    system("cls");

    printf("Insira o valor desejado para conversao\n\n=> ");
    switch(opcao)
    {
        case 1:
        {
            int v_decimal;
            scanf("%d", &v_decimal);
            decimal_to_bin(v_decimal);
            decimal_to_hex(v_decimal);
            break;
        }
        case 2:
        {
            long long v_binario;
            scanf("%lld", &v_binario);
            bin_to_decimal(v_binario);
            // bin_to_hex(v_binario);
            break;
        }
        case 3:
            printf("Opcao 3 ainda nao implementada.\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
}

// Função Principal - MAIN
int main()
{
    int opcao;
    system("cls");

    menu();

    return 0;
}
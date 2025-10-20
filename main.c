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

void decimal_to_bin(int num)
{
    int quoc=num, cont=0;
    int resto, vetor[cont];
    
    do
    {
        cont++;
        resto = quoc % 2;
        quoc /= 2;
        vetor[cont] = resto;
    }while(quoc != 0);

    for(int i=cont; i>0; i--)
    {
        printf("%d", vetor[i]);
    }
}

int main()
{
    decimal_to_bin(800);

    return 0;
}
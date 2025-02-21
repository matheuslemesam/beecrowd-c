/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.
ex: 
12 1 5.30
16 2 5.10

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
ex:
VALOR A PAGAR: R$15.50
*/

#include <stdio.h>

int main (){

    int codigo1, nmrpc1, codigo2, nmrpc2;
    float valorpc1, valorpc2;
    scanf("%d %d %f\n", &codigo1, &nmrpc1, &valorpc1);
    scanf("%d %d %f\n", &codigo2, &nmrpc2, &valorpc2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorpc1*nmrpc1 + valorpc2*nmrpc2);

    return 0;
}
#include<stdio.h>
#include "InOut.h"

/**

 1 - Leitura de inteiros
 2 - Leitura de reais
 3 - Leitura de caracteres
 4 - Leitura de Strings

*/

void m1(){

    int n = readInt();
    printf("Inteiro: %d", n);

}

void m2(){

    float n = readFloat();
    printf("Real: %.2f", n);
}

void m3(){

    char n = readChar();
    printf("Caractere: %c", n);
}

void m4(){

    char* n = readString(); //OBS: Maximo 100 caracteres
    printf("String: %s", n);
}

int main(){

    //Teste inicial
    m1();
    m2();
    m3();
    m4();

    printf("\n");

    return 0;
}


/**


Teste inicial:

        1) Entrada: 1    / Saida: 1    -> OK
        2) Entrada: 1    / Saida: 1.00 -> OK
        3) Entrada: a    / Saida: a    -> OK
        4) Entrada: abcd / Saida: abcd -> OK


Teste posterior(1):

        1) Entrada: a    / Saida: 0    -> !OK
        1) Entrada: a    / Saida: 0.00 -> !OK
        1) Entrada: a    / Saida: a    -> OK
        1) Entrada: a    / Saida: a    -> OK

        - OBS: Digitar numeros em caracteres e permitido na linguagem,
               afinal '1' e um caractere.


Teste posterior(2):

        1) Entrada: abcd    / Saida: 0     -> !OK
        1) Entrada: !       / Saida: 0.00  -> !OK
        1) Entrada: !       / Saida: c     -> OK
        1) Entrada: !       / Saida: ""    -> !OK

        - OBS: Ao digitar "abcd" em uma funcao que espera um numero, a função - scanf - falha e deixa
               os caracteres restantes "abcd" no buffer de entrada. Isso pode causar problemas nas
               leituras subsequentes, pois o proximo scanf tentara ler esses caracteres, o que resulta
               em comportamentos inesperados.
               Para evitar isso, e necessario limpar o buffer de entrada apos uma falha de leitura.

        - OBS:

*/

#ifndef INOUT_H
#define INOUT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*

    - Todas funcoes abaixo realizam a leitura de dados, porem faremos alguns testes com valores inesperadoos
     e deixaremos registrados os resultados comentados para algumas possibilidades invalidas.

    - Posteriormente, iremos corrigir as funcoes para torna-las mais robustas usando boas praticas de programacao

*/


int readInt(){

    //Definir dados
    int n;

    printf("\n\nDigite um valor: ");
    scanf("%d", &n);
    getchar();

    while(getchar() != '\n');

    return n;
}

float readFloat(){

    //Definir dados
    float n;

    printf("\n\nDigite um valor: ");
    scanf("%f", &n);
    getchar();

    return n;
}

char readChar(){

    //Definir dados
    char n;

    printf("\n\nDigite uma letra: ");
    scanf(" %c", &n);
    getchar();

    return n;
}

char* readString(){

    //Definir dados
    char* n = (char*)malloc(100 * sizeof(char));

    printf("\n\nDigite uma palavra: ");
    fgets(n, 100, stdin);
    n[strcspn(n, "\n")] = '\0';

    return n;
}

#endif // INOUT_H

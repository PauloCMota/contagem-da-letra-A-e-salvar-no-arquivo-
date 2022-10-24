#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nome[30];
    int x,t, ca=0;
    printf("\n\t INFORME UM NOME : ");
    gets(nome);
    t=strlen(nome);
    FILE *f = fopen("Arquivo.txt"  , "w");
    setlocale(LC_ALL,"Portuguese");

    for(x=1; x <= t-1; x++)
    {
        if(nome[x] == 'a' || nome[x] == 'A')
        ca++;
    }
    printf("\n O nome %s ",(nome));
    printf("tem %d letra a. " ,  ca);
    fprintf(f,"%s , %i " , nome , ca);
    printf("\n\n");
    system("pause");
    fclose(f);
    return 0;
}

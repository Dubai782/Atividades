//Uma pesquisa está sendo feita para contar o número de telespectadores de alguns programas de televisão. Faça um programa que apresente o menu de opções com os seguintes programas de TV para o telespectador escolher:

//1 - Domingão do Faustão

//2 - Luciano Hulk

//3 - The Voice Brasil

//4 - Sair

//Além da opção do menu o usuário deverá receber a idade (de 0 a 150 anos) e o sexo (1- Feminino e 2- Masculino) do telespectador. A sequência da entrada deverá ser: opção do menu, idade e sexo. Valide as entradas de dados (opção, idade e sexo). Caso o usuário digite algo inválido, mostre a mensagem “Opção Inválida!”.

//Ao final do programa, exiba, inclusive na ordem abaixo:

//O programa de TV que teve maior número de votos femininos.
//A média das idades dos telespectadores do programa The Voice Brasil (considere apenas o sexo masculino).
//A porcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 anos (considere 18 e 28) com relação ao total de telespectadores do Domingão do Faustão.

****************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int df[3], lh[3], tvb[3], s[3], opçao[3], sexo[3]; // Programas da TV
    int idade[3],telespectadores;//VARIAVEIS QUE EU POSSA ARMAZENAR MAIS DE UM NUMERO
    float media = 0,;
    char m, f;
    double somaidade=0;
    do{
    printf("\n---> Escolha a Opção que deseja: ");
    printf("\n1 - Domingão do Faustão");
    printf("\n2 - Luciano Hulck");
    printf("\n3 - The Voice Brasil");

    
    scanf("%d %d %d ", &df[i], &lh[i], &tvb[i]);

    printf("\n---> Digite sua idade: ");
    scanf("%d", &idade[i]);
    somaidade += idade[i];//CADE VEZ QUE RODAR O PROGRAMA 

    printf("\nDigite 1 sexo Feminino: ");
    printf("\nDigite 2 sexo Masculino: ");
    scanf("%i", &sexo[i]);
    printf("\n4 - Sair");
    scanf("%i",&opcao[i]);
    if(escolha = 3 && sexo[i = 1])
    {
        femdf++;
        printf("O programa  que tiver o maior número de vizualizações femininas foi Domingão do Faustão")
    }
    else if(escolha = 2 && sexo[i] = 1)
    {
         femlh++;
         printf("O programa  que tiver o maior número de vizualizações femininas foi Luciano Hulck")
    }
    else if(escolha = 3 && sexo[i] = 1)
    {
         femtvb++;
        printf("O programa  que tiver o maior número de vizualizações femininas foi The Voice Brasil")
    }


    if (escolha = 3)
    {
        double resultados
        resultados = idadeH / vet1;
        printf("A media foi" + resultado)
    }


         
    }while(opcao !=2)
    media = somaidade/3;
    if(df > lh > tvb ){

    }else if(){

    }else if(){

    }


        printf("A porcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 é");
}
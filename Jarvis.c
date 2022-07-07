//Inclusao de Biblioteca
#include <stdio.h>
#include<string.h>

//Funcao
int main()

//Declaracao de variaveis
{ char nome;
int idade;
char aprenda;
char google;
int menu;

//Introducao do Menu
    printf("======================\n");
    printf("========Talk To Jarvis==========\n");
    printf("======================\n");

    printf("Olá,\n Seja bem vindo,\n Meu nome e Jarvis e gostaria de conversar com você,\n Digite a opcao para introduzir a conversa: \n");
    printf("Opcao 1 : Perguntar meu nome\n");
    printf("Opcao 2 : Perguntar minha idade\n");
    printf("Opcao 3 : Me ensinar uma pergunta\n");
    printf("Opcao 4 : Me fornecer o link do Google\n");
    printf("Opcao 5 : Finalizar Menu\n");

    printf("Informe aqui a sua opcao: ");
    scanf("%i", &menu);


        if(menu == 1) {
            printf("Qual e o seu nome?:\n");
            scanf("%c",&nome);
            scanf("%c",&nome);
            printf("Que nome lindo.");
        }

        else if(menu == 2) {
            printf("Qual e a sua idade?:");
            scanf("%i",&idade);
            scanf("%c",&nome);
            printf("Interessante!\n");
        }

    else if(menu == 3) {
        printf("Qual frase voce gostaria que eu falasse?:");
        scanf("%c",&aprenda);
        scanf("%c",&nome);
        printf("A frase que voce me ensinou foi: %c\n", aprenda);
    }

    else if(menu == 4) {
        printf("O link do google e: https://www.google.com.br\n");
    }

    else if(menu == 5) {
        printf("obrigado por utilizar.");
    }

    return 0;
}


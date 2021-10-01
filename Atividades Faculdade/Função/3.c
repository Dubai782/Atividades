#include<stdio.h>
#include<conio.h>

float fmedia(float n1, float n2)//Função
{
      float m = 0;
      m = (n1 + n2)/2;
      return m;
}

float pmedia()//Procedimento
{
      float n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, m = 0;

      printf("Digite a nota 1 do aluno: ");
      scanf("%f", &n1);
      printf("Digite a nota 2 do aluno: ");
      scanf("%f", &n2);
      printf("Digite a nota 3 do aluno: ");
      scanf("%f", &n3);
      printf("Digite a nota 4 do aluno: ");
      scanf("%f", &n4);
      printf("Digite a nota 5 do aluno: ");
      scanf("%f", &n5);


      m = (n1 + n2)/2;
      printf("\n\nA media do aluno foi %6.2f", m);


}

main()
{
      float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
      int op = 0;


      printf("Escolha uma das cinco opcoes abaixo\n");
      printf("\n=========================================\n");
      printf("\nExibir media por Function? Digite 1\n");
      printf("\nExibir media por Procedure? Digite 2\n");
      printf("\nExibir media por Procedure? Digite 3\n");
      printf("\nExibir media por Procedure? Digite 4\n");
      printf("\nExibir media por Procedure? Digite 5\n");
      scanf("%d", &op);

      switch (op)
      {

       case 1:
            {
                 printf("Digite a nota 1 do aluno: ");
                 scanf("%f", &num1);
                      
                 break;
             }

       case 2:
            {
                 printf("Digite a nota 2 do aluno: ");
                 scanf("%f", &num2);

                 break;
            }
        case 3:
             {
                 printf("Digite a nota 3 do aluno: ");
                 scanf("%f", &num3);

                 break;
             }
        case 4:
             {
                printf("Digite a nota 4 do aluno: ");
                scanf("%f", &num4);

                break;
             }   
        case 5:
        {
                pmedia();
                
                 printf("\n\nA media do aluno foi %6.2f", fmedia(num1, num2, num3, num4, num5));
            
                 break;

        }
             
       }

getch();
}
}
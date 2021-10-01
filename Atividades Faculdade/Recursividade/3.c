/*20-Faça uma função que verifique se um número é divisível por outro sem usar o operador %.*/

****************************************************************
#include <stdio.h>
#include <string.h>

#define STRMAX 50

void troca_string (char *str_a, char *str_b)
{
  char strtemp[STRMAX];  /* string temporaria usada para a troca */

  strcpy (strtemp, str_a);
  strcpy (str_a, str_b);
  strcpy (str_b, strtemp);
}

void main (void)
{
  char string1[STRMAX], string2[STRMAX];

  printf ("Entre com a primeira string: ");
  gets (string1);
  printf ("\nEntre com a segunda string: ");
  gets (string2);
  troca_string (string1, string2);
  printf ("\nA primeira string agora e: %s\nA segunda string agora e: %s", string1, string2);
}
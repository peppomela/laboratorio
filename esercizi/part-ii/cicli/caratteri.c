/* caratteri.c */

/* stampa i caratteri di una stringa */

#include <stdio.h>

int main()
{
  char saluto[] = "Salve a tutti!";
  int i;

  printf("Stringa iniziale: ");
  puts(saluto);

  printf("\nCaratteri:\n");
  i = 0;
  while (saluto[i] != '\0') {
    printf("%c\n", saluto[i]);
    i++;
  }

  return 0;
}

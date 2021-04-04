#include <stdio.h>

int main() {

  int i = 10;
  int *punteroI;

  punteroI = &i;

  printf("\nContenido de la variable i: %d", i);
  printf("\nContenido del puntero: %d", *punteroI);
  printf("\nDirección de memoria almacenada en el puntero: %p", punteroI);
  printf("\nDirección de memoria de la variable i: %p", &i);
  printf("\nDirección de memoria del puntero: %p", &punteroI);
  printf("\n\nTamaño de memoria utilizado por i: %lu", sizeof(i));

  return 0;
}
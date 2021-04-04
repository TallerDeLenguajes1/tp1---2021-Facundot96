#include <stdio.h>

int potencia(int );
void potenciaVoid();
void direccionMem();
void invertir(int *, int *);
void orden(int *, int *);

int main() {

  int numero, resultado, a , b;

  printf("Ingrese un número: ");
  scanf("%d", &numero);

  resultado = potencia(numero);

  printf("El valor de la pontencia es : %d\n", resultado);

  potenciaVoid();

  direccionMem();

  printf("\nIngrese dos números ");
  printf("\nIngrese el primer número: ");
  scanf("%d", &a);
  printf("\nIngrese el segundo número: ");
  scanf("%d", &b);

  invertir(&a, &b);

  printf("Valores invertidos: %d %d", a, b);


  printf("\nIngrese dos números ");
  printf("\nIngrese el primer número: ");
  scanf("%d", &a);
  printf("\nIngrese el segundo número: ");
  scanf("%d", &b);

  orden(&a, &b);

  printf("Valores ordenados: %d %d", a, b);


  return 0;
}

int potencia(int n){


  return n*n;

}

void potenciaVoid(){

  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);
  printf("El valor de la pontencia es : %d\n", (n*n));

  return;

}

void direccionMem(){

  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);
  printf("La dirección de memoria del valor ingresado es : %p\n", &n);
  printf("El valor ingresado es : %d\n", n);

  return;

}

void invertir(int *a, int *b){

  int auxiliar;

  auxiliar = (*a);
  (*a) = (*b);
  (*b) = auxiliar;

  return;

}

void orden(int *a, int *b){

  int auxiliar;

  if( (*a) > (*b) ){

    auxiliar = (*a);
    (*a) = (*b);
    (*b) = auxiliar;
    
  }

  return;

}
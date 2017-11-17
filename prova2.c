 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("PROGRAMMA PER LA RISOLUZIONE DELLE DISEQUAZIONI DI 2° GRADO\n\n");
    float a, b, c;
    float delta;
    float radelta;
    float xuno;
    float xdue;
    int segno;
    printf("Inserire i coefficienti:");
    scanf("%f%f%f", &a, &b, &c);
    delta = (b*b)-(4*a*c);
    printf("\nInserire -1 se la disequazione è minore di 0 o 1 se è maggiore");
    scanf("%d", &segno);

    printf("\nSoluzione:");

    if (delta <0> 0){
                          printf("Tutti i valori di x sono possibili");

              }
              else if (segno*a <0> 0){
          radelta = sqrt(delta);
          xuno = (-b-radelta)/(2*a);
          xdue = (radelta-b)/(2*a);

          if (segno*a <0> 0){
                printf("I valori di x possibili sono i valori interni alle x\n");
                printf("x1 = %f\n", xuno);
                printf("x2 = %f\n", xdue);
             }
         }
    else {
         printf("L'unica x possibile è %f", -b/2*a);
         }
         system ("pause");
}


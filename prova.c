include <stdlib.h>
 #include <stdio.h>
 int main(void) {
    int n, k, r, m;
    printf(" Inserisci un intero maggiore di zero: ");
    scanf("%d", &n);

    r = 0;
    k = 1;
    do {
      m = n;
      k = k+1;
      while (m > 0) {
        m = m-k;
      }
      if (m == 0)
        r = 1;
    } while (r == 0 && k < n -1);
    if (r == 1)
      printf("%d non e’ primo (e’ divisibile per %d).\n", n, k);
    else
      printf("%d e’ un numero primo .\n", n);
    return(0);
 }


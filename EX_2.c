#include <stdio.h>

int main() {

    int a , b;

 printf("Entrez deux nombres : ");
 scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d est le plus grand.\n", a);
    else if (b > a)
        printf("%d est le plus grand.\n", b);
    else
        printf("Les deux nombres sont egaux.\n");

 return 0;

}

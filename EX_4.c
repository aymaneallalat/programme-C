#include <stdio.h>

int main() {

 int a, b, c;

 printf("Entrez trois nombres : ");
 scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d est le plus grand.\n", a);
    else if (b >= a && b >= c)
        printf("%d est le plus grand.\n", b);
    else
        printf("%d est le plus grand.\n", c);

 return 0;
 
}

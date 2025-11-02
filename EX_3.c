#include <stdio.h>

int main() {
 int n;
 
 printf("Entrez un nombre : ");
 scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("%d est divisible par 3 et 5.\n", n);
    else if (n % 3 == 0)
        printf("%d est divisible par 3.\n", n);
    else if (n % 5 == 0)
        printf("%d est divisible par 5.\n", n);
    else
        printf("%d n'est divisible ni par 3 ni par 5.\n", n);

 return 0;

}

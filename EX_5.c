#include <stdio.h>

int main() {

 float note;

 printf("Entrez la note de 0 a 20 : ");
 scanf("%f", &note);

    if (note < 10)
        printf("Insuffisant\n");
    else if ( note < 12)
        printf("Passable\n");
    else if ( note < 14)
        printf("Assez bien\n");
    else if ( note < 16)
        printf("Bien\n");
    else
        printf("Tres bien\n");

 return 0;

}
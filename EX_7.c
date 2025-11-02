#include <stdio.h>

int main(){

 float a, b;
 char op;
   printf("Entrez une operation : ");
   scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+': printf("Resultat = %.3f\n", a + b); break;
        case '-': printf("Resultat = %.3f\n", a - b); break;
        case '*': printf("Resultat = %.3f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Resultat = %.3f\n", a / b);
            else
                printf("Erreur : b doit etre different a 0.\n");
            break;
        default:
            printf("Operateur invalide !\n");
    }

 return 0;

}

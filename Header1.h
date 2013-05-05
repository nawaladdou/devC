#include <stdio.h>  
long double x, y;

int main(void)
{
    printf("Calcul de moyenne\n");   
    printf("Entrez le premier nombre : ");
    scanf("%Lf", &x);           
    printf("\nEntrez le deuxième nombre : ");
    scanf("%Lf", &y);            
    printf("\nLa valeur moyenne de %Lf et de %Lf est %Lf.\n", x, y, (x+y)/2);
    return 0;
}
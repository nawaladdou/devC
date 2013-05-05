// DevC.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <stdio.h>  /* Autorise l'emploi de printf et de scanf. */
#include <string.h>
#include <iostream>

using namespace std;
long double x, y;

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Calcul de moyenne" << std::endl;

    int age;
    cin >> age;

	 /*printf("Calcul de moyenne\n");   
    printf("Entrez le premier nombre : ");
    scanf("%Lf", &x);            
    printf("\nEntrez le deuxième nombre : ");
    scanf("%Lf", &y);            
    printf("\nLa valeur moyenne de %Lf et de %Lf est %Lf.\n",
        x, y, (x+y)/2);*/
    return 0;
}


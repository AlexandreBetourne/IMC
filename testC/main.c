//
//  main.c
//  testC
//
//  Created by Alexandre Bétourné on 01/02/2019.
//  Copyright © 2019 betournator. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void printIMC(int poids, float taille);

int main(int argc, char *argv[]) {
    int poids = 0;
    float taille = 0;
    
    printf("Entrez votre poids. ");
    scanf("%d", &poids);
    printf("Entrez votre taille. ");
    scanf("%f", &taille);
    
    printIMC(poids, taille);
    
    return 0;
}

void printIMC(int poids, float taille)
{
    float IMC = poids / pow(taille / 100.0, 2);
    
    if (IMC < 16)
    {
        printf("Anorex \n");
    } else if (IMC > 16.5 && IMC < 18.5)
    {
        printf("Maigre \n");
    }else if (IMC > 18.5 && IMC < 25)
    {
        printf("Normale \n");
    }else if (IMC > 25 && IMC < 30)
    {
        printf("Surpoids \n");
    }else if (IMC > 30 && IMC < 35)
    {
        printf("Obésité modéré \n");
    }else if (IMC > 35 && IMC < 40)
    {
        printf("Obésité élevé \n");
    }else if (IMC > 40 )
    {
        printf("Obésité massive \n");
    }
}

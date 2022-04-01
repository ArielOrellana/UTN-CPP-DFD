#include<stdio.h>
#include<conio.h>

main()
{   int N, A, P;
    printf("ingrese lado del cuadrado /n");
    scanf("%d",&N);
    A=N*N;
    P=N*4;
    printf("el area del cuadrado es: /n %d",A);
    printf("el perimetro del cuadrado es: /n %d",P);
    printf("/n/n/n presione una tecla para salir...");
    getch();
    }

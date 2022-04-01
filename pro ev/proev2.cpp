#include<stdio.h>
#include<conio.h>

main()
  {  int A, B, C, D, F, S, P;
    printf("Ingrese cinco numeros /n");
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    scanf("%d",&F);
    S=A+B+C+D+F;
    P=S/5;
    printf("La sumatoria de los numeros ingresados es /n %d",S);
    printf("el  promedio de los numeros ingresados es /n %d",P);
    printf("/n/n/n presione una tecla para finalizar...");
    getch();
  }

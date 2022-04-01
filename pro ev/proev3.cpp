#include<stdio.h>
#include<conio.h>

main()
  {  int N, D, M, T;
    printf("ingrese un numero /n");
    scanf("%d",&N);
    D=N*2;
    T=N*3;
    M=N/2;
    printf("el doble del numero ingresado es /n %d",D);
    printf("El triple del numero ingresado es /n %d",T);
    printf("el medio del numero ingresado es /n %d",M);
    printf("/n/n/n presione una tecla para finalizar...");
    getch();
  }

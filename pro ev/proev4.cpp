#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
  {  int A, B, C, X1, X2;
  	printf("/n introdusca A B C para resolver una ecuacion de segundo grado");
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    X1=((-B+sqrt(B*B-4*A*C))/2*A);
    X2=((-B-sqrt(B*B-4*A*C))/2*A);
    printf("el valor de x1 es /n %d",X1);
    printf("el valor de x2 es /n %d",X2);
    printf("/n/n/n presione una tecla para finalizar...");
    getch();
  }

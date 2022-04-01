#include<stdio.h>
#include<conio.h>
main()
{
	int A, B, N ,P ,M;
	printf("ingrese numero");
	scanf("%d",&B);
	scanf("%d",&A);
	N=B<A;
	P=B>A;
	M=A+B;
	if(P)
	{
		printf("el numero mayor es %d", B);
	}
	else
	{
		if(N)
		{
			printf("el mayor es %d", A);
		}
		else
		{
			printf("los numeros son iguales y sumados es %d", M);
		}
	}
	printf("para finalizar pulse cualquier tecla...");
	getch();
}

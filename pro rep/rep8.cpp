#include<stdio.h>
#include<conio.h>
main()
{
	int N, A, B, C, X, P, CP;
	printf("ingrese cantidad de veces que se repita el programa");
	scanf("%d",&N);
	printf("ingrese intervalo");
	scanf("%d",&A);
	scanf("%d",&B);
	C=1;
	while(C<=N)
	{
		printf("ingrese numero");
		scanf("%d",&X);
		if(X>A)
		{
			if(X<B)
			{
				CP=1;
				printf("Pertenece");
				CP=CP+1;
			}
			else
			{
				printf("no pertenece");
			}
		}
		else
		{
			printf("no pertenece");
		}
		C=C+1;
	}
	P=(CP*N)/100;
	printf("P %d",P);
}

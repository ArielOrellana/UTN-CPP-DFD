#include<stdio.h>
#include<conio.h>

main()
{
	int N, C, A, P, X;
	printf("ingrese lados de un cuadrado");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",&X);
		A=X*X;
		P=X*4;
		printf("area %d", A);
		printf("perimetro %d", P);
		C=C+1;
	}
}

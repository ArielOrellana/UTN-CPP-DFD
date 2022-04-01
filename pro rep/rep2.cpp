#include<stdio.h>
#include<conio.h>

main()
{
	int S, X, P, N, C;
	printf("Ingrese los numeros");
	S=0;
	scanf("%d",&N);
	C=0;
	while(C<=N)
	{
		scanf("%d",&X);
		S=S+X;
		P=S/N;
		printf("S= %d P=%d",S ,P);
		C=C+1;
	}
}

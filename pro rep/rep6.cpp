#include<stdio.h>
#include<conio.h>
main()
{
	int N, X, C;
	printf("ingrese numero");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",&X);
		if(X%3==0)
		{
			printf("imprimir");
		}
		else
		{
			if(X%5==0)
			{
				printf("imprimir");
			}
			else
			{
				printf("no imprimir");
			}
		}
		C=C+1;
	}
}

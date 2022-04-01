#include<stdio.h>
#include<conio.h>
main()
{
	int N, C, X;
	printf("ingrese numero");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",& X);
		if(X%5==0)
		{
			if(X%3==0)
			{
				printf("imprimir");
			}
			else
			{
				printf("no imprimir");
			}
		}
		else
		{
			printf("no imprimir");
		}
		C=C+1;
	}
}

#include<stdio.h>
#include<conio.h>
main()
{
	int N, X, Y, C;
	printf("ingrese rep");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		printf("ingrese cordenadas");
		scanf("%d",&X);
		scanf("%d",&Y);
		if(X>0)
		{
			if(Y>0)
			{
				printf("'1º CUADRANTE'");
			}
			else
			{
				printf("'4º CUADRANTE'");
			}
		}
		else
		{
			if(X<0)
			{
				if(Y<0)
				{
					printf("'3º CUADRANTE'");
				}
				else
				{
					printf("'2º CUADRANTE'");
				}
			}
		}
		C=C+1;
	}
}

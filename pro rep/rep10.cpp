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
				printf("'1� CUADRANTE'");
			}
			else
			{
				printf("'4� CUADRANTE'");
			}
		}
		else
		{
			if(X<0)
			{
				if(Y<0)
				{
					printf("'3� CUADRANTE'");
				}
				else
				{
					printf("'2� CUADRANTE'");
				}
			}
		}
		C=C+1;
	}
}

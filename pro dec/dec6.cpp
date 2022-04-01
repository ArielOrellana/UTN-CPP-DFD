#include<stdio.h>
#include<conio.h>

main()
{
	int X, Y;
	
	printf("Ingrese cordenada x");
	scanf("%d",&X);
	printf("Ingrese cordenada y");
	scanf("%d",&Y);
	if(X>0)
	{
		if(Y>0)
		{
			printf("1º CUADRANTE");
		}
		else
		{
			printf("4º CUADRANTE");
		}
	}
	else
	{
		if(X<0)
		{
			if(Y<0)
			{
				printf("3º CUADRANTE");
			}
			else
			{
				printf("2º CUADRANTE");
			}
		}
	}
}

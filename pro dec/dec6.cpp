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
			printf("1� CUADRANTE");
		}
		else
		{
			printf("4� CUADRANTE");
		}
	}
	else
	{
		if(X<0)
		{
			if(Y<0)
			{
				printf("3� CUADRANTE");
			}
			else
			{
				printf("2� CUADRANTE");
			}
		}
	}
}

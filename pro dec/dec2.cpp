#include<stdio.h>
#include<conio.h>
main()
{
	int B, N ,P;
	printf("/n ingrese numero");
	scanf("%d",&B);
	N=B<10;
	P=B>10;
	if(N)
	{
		printf("/n es menor a 10");
	}
	else
	{
		if(P)
		{
			printf("/n es mayor a 10");
		}
		else
		{
			printf("/n es igual a 10");
		}
		
	}
	printf("/n/n/n para finalizar pulse cualquier tecla...");
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int B, N ,P ,M;
	printf("ingrese numero");
	scanf("%d",&B);
	N=B<0;
	P=B>=0;
	if(P)
	{
		M=B*5;
		printf("P y multiplicado es %d", M);
	}
	else
	{
		printf("N");
	}
	printf("para finalizar pulse cualquier tecla...");
	getch();
}

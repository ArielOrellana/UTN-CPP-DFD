#include<stdio.h>
#include<conio.h>
main()
{
	int B, N ,P;
	printf("/n ingrese numero");
	scanf("%d",&B);
	N=B<0;
	P=B>=0;
	if(P)
	{
		printf("/n P");
	}
	else
	{
		printf("/n N");
	}
	printf("/n/n/n para finalizar pulse cualquier tecla...");
	getch();
}

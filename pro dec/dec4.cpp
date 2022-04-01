#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("Ingrese numero");
	scanf("%d",&n);
	if(n<15)
	{
		printf("no se encuentra dentro del intervalo 15,25");
	}
	else
	{
		if(n<25)
		{
			printf("se encuentra dentro del intervalo 15, 25");
		}
		else
		{
			printf("no se encuentra dentro del intervalo 15, 25");
		}
	}
}

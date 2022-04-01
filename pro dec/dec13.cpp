#include<stdio.h>
#include<conio.h>
main()
{
	int x, M;
	printf("ingresar el consuma");
	scanf("%d",&x);
	if(x>380)
	{
		M=x*15;
		printf("t=$ %d", M);
	}
	else
	{
		if(x<380)
		{
			printf("paga el minimo");
		}
	}
	printf("para finalizar pulse cualquier tecla...");
	getch();
}

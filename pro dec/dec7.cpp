#include<stdio.h>
#include<conio.h>
main()
{
	int A, B, C ,D ,E ,F;
	printf("ingrese las edades de dos personas");
	scanf("%d",&A);
	scanf("%d",&B);
	C=B<A;
	D=B>A;
	E=B-A;
	F=A-B;
	if(C)
	{
		printf("la diferencia de edad es %d", F);
	}
	else
	{
		if(D)
		{
			printf("la diferencia de edad es %d", E);
		}
		else
		{
			printf("son de la misma edad");
		}
	}
	printf("para finalizar pulse cualquier tecla...");
	getch();
}

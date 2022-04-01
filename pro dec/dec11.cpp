#include<stdio.h>
#include<conio.h>

main()
{
	int a, b;
	
	printf("Ingrese hora");
	scanf("%d",&a);
	printf("Ingrese minutos");
	scanf("%d",&b);
	if(a>=7 and b<=30)
	{
		if(a<=14 and b>=00)
		{
			printf("'buenos dias'");
		}
		else
		{
			if(a>=14 and b>=01)
			{
				if(a<=20 and b<=30)
				{
					printf("'buenas tardes'");
				}
				else
				{
					if(a>=20 and b<=31)
					{
						printf("'buenas noches'");
					}
				}
			}
		}
	}
	else
	{
		if(a<=7 and b<=29)
		{
			printf("'buenas noches'");
		}
	}
}

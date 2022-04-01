#include<stdio.h>
#include<conio.h>
main()
{
	int N, C, X , Cm, Pm;
	printf("ingrese rep");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		printf("ingrese edad");
		scanf("%d",&X);
		if(X<=14)
		{
			printf("Infancia");
		}
		else
		{
			if(X<=26)
			{
				printf("Juventud");
			}
			else
			{
				if(X<=59)
				{
					printf("Adulto");
				}
				else
				{
					Cm=1;
					printf("Mayores");
					Cm=Cm+1;
				}
			}
		}
		C=C+1;
	}
	printf("Cm %d",Cm);
	Pm=(Cm*100)/N;
	printf("Pm %d", Pm);
}

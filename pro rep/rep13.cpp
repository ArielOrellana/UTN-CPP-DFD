#include<stdio.h>
#include<conio.h>
main()
{
	int c, x, y, n, ci, cf1, cf2, i;
	printf("ingrese Rep");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("'Ingrese, cantidad de kilometros y dias de estadia'");
		scanf("%d",&x);
		scanf("%d",&y);
		if(x<800)
		{
			if(y<7)
			{
				c=x*5;
				printf("c=",c);
			}
		}
		else
		{
			if(x>800)
			{
				if(y>7)
				{
					ci=x*5;
					cf1=(30*ci)/100;
					cf2=ci-cf1;
					printf("cf= %d",cf2);
				}
			}
		}
		i=i+1;
	}
}

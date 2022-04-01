#include<stdio.h>
#include<conio.h>
main()
{
	int x, y, a, b, c, d, e, f, g, h;
	printf("ingrese sueldo y cantidad de hijos");
	scanf("%d",&x);
	scanf("%d",&y);
	a=y*1684;
	b=a+x;
	c=y*1134;
	d=c+x;
	e=y*683;
	f=e+x;
	g=y*350;
	h=g+x;
	if(x<=3005)
	{
		printf("no cobra");
	}
	else
	{
		if(x>3005)
		{
			if(x<=26129)
			{
				printf("sf= %d", b);
			}
			else
			{
				if(x<38322)
				{
					printf("sf= %d", d);
				}
				else
				{
					if(x<44244)
					{
						printf("sf= %d", f);
					}
					else
					{
						if(x<83917)
						{
							printf("sf= %d", h);
						}
						else
						{
							if(x>83917)
							{
								printf("no cobra");
							}
						}
					}
				}
			}
		}
	}
}

#include<stdio.h>
#include<conio.h>
main()
{
	int N, C, Cm, Tm, T, X;
	printf("Usuarios");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",&X);
		if(X>380)
		{
			T=X*15;
			printf("T= %d",T);
		}
		else
		{
			Cm=0;
			Tm=X*15;
			Cm=Cm+1;
			printf("Tm= %d",Tm);
			printf("Cm= %d",Cm);
		}
		C=C+1;
	}
}

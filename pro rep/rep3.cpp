#include<stdio.h>
#include<conio.h>

main()
{
	int N, C, X;
	
	printf("ingrese num");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",&X);
		if(X%2==0)
		{
			printf("par");
		}
		else
		{
			printf("impar");
		}
	}
}

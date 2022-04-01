#include<stdio.h>
#include<conio.h>

main()
{
	int S, N, P, C, X;
	printf("ingrese numero");
	scanf("%d",&N);
	S=0;
	C=1;
	while(C<=N)
	{
		scanf("%D",&X);
		if(X<0)
		{
			if(X%2==0)
			{
				S=S+X;
				P=S/N;
				printf("P %d", P);
			}
		}
		C=C+1;
	}
	
}

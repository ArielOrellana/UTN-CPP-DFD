#include<stdio.h>
#include<conio.h>
main()
{
	int N, X, Y, C;
	printf("ingrese Num");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
		scanf("%d",&X);
		Y=3*X+5;
		printf("X %d",X);
		printf("Y %d",Y);
		C=C+1;
	}
}

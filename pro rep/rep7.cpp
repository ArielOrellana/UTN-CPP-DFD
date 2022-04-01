#include<stdio.h>
#include<conio.h>

main()
{
	int N, A, B, MI, MA, MB, C;
	printf("ingrese num");
	scanf("%d",&N);
	MA=0;
	MI=0;
	MB=0;
	C=1;
	while(C<N)
	{
		scanf("%d",&A);
		scanf("%d",&B);
		if(A<B)
		{
			printf("el menor es %d",A);
			MA=MA+1;
			printf("MA %d", MA);
		}
		else
		{
			if(B<A)
			{
				printf("el menor es %d", B);
				MB=MB+1;
				printf("MB %d", MB);
			}
			else
			{
				printf("son igules");
				MI=MI+1;
				printf("MI %d",MI);
			}
		}
		C=C+1;
		printf("MA %d",MA);
		printf("MI %d",MI);
		printf("MB %d",MB);
	}
}

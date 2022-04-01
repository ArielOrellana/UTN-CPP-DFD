#include<stdio.h>
#include<conio.h>
main()
{
	int x, y, C, N;
	printf("ingrese rep");
	scanf("%d",&N);
	C=1;
	while(C<=N)
	{
	    printf("ingrese notas");
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x>=7)
	    {
		    if(y>=7)
		    {
			    printf("promociona");
		    }
		    else
		    {
			    if(y>=4)
			    {
				    printf("regulariza la materia");
			    }
			    else
			    {
				    printf("recupera segundo Parcial");
			    }
		    }
	    }
	    else
	    {
		    if(x<7)
	        {
			    if(x>=4)
			    {
				    if(y<7)
				    {
					    if(y>=4)
					    {
						    printf("regulariza la materia");
					    }
					    else
					    {
						    printf("recupera segundo parcial");
					    }
				    }
				    else
				    {
					    printf("regulariza la materia");
				    }
			    }
			    else
			    {
				    if(y<7)
				    {
					    if(y>=4)
					    {
						    printf("recupera primer parcial");
					    }
					    else
					    {
						    printf("recupera integral");
					    }
				    }
			    }
		    }
		    else
		    {
		    }
	    }
	    C=C+1;
    }
}

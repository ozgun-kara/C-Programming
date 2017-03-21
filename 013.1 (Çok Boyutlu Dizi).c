#include <stdio.h>

main()
{
	int nott [3][1][2];
	int i,j,k;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<1;j++)	
		{
			for (k=0;k<2;k++)
			{	
				printf("%d. okulun %d. sinifindaki %d. ogrencinin notunu giriniz: \n",i+1,j+1,k+1);
				scanf ("%d",&nott [i][j][k]);
			}	
		}	
	}
}






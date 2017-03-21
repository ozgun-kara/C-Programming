#include <stdio.h>

main()
{
	int	dizi [5];
	int i,j,t;
	
	for(i=0;i<5;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)           /* "i" yerine "5-i" yazmak sýralamayý hýzlandýrýr */
		{
			if(dizi[j+1] < dizi[j])
			{
				t=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=t;			
			}
		}
	}
	
	printf("\nSiralanmis durum: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",dizi[i]);	
	}	
}

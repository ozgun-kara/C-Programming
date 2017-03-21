#include <stdio.h>

main()
{
	int	dizi[]={78,11,8,22};
	int t;
	
	for(int i=0;i<4;i++)				// Küçükten büyüge siralama	
	{
		for(int j=0;j<4;j++)
		{
			if(dizi[j+1] < dizi[j])			// Not: Büyükten kücüge siralama için: if(dizi[j] < dizi[j+1])
			{
				t=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=t;			
			}
		}
	}
	
	printf("Kucukten buyuge siralanmis durum: ");
	for(int i=0;i<4;i++)
	{
		printf("%d ",dizi[i]);	
	}	
}

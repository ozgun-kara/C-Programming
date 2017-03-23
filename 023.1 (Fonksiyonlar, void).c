#include <stdio.h>

int i;						// main ve bütün fonksiyonlar dahil tüm kodu kapsar.

void dongu()
{
	for (i=-5;i<10;i++)
	{
		printf("%d ",i);
	}
}

int main()
{
	dongu();
	printf("\n\n");
	printf("i = %d",i);		// i en son 10 olup dongu fonksiyonundan çýktýðý için son deðeri 10 dur.		
}



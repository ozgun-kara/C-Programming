#include <stdio.h>

int i;						// main ve b�t�n fonksiyonlar dahil t�m kodu kapsar.

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
	printf("i = %d",i);		// i en son 10 olup dongu fonksiyonundan ��kt��� i�in son de�eri 10 dur.		
}



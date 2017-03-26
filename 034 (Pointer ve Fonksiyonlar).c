#include <stdio.h>

void mesaj_yaz (int *x)
{
	int i;
	for (i=1; i <= *x; i++)	
	{
		printf("%d - Hello World\n",i);			
	}		
}

int main()
{
	int deger;
	printf("Deger giriniz:\n");
	scanf("%d",&deger);
	mesaj_yaz(&deger);		
}

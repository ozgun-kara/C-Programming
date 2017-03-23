#include <stdio.h>

int main()
{
	char isim [] = "Zidane";			// char isim [100] = "Zidane"; yazılsa da uzunluk doğru bulunur.
	int uzunluk=0;
	
	for(int i=0; isim[i] != NULL ;i++)		// NULL yerine '\0' da yazılabilir.
	{
			uzunluk++;
	}
	printf("%s isminin uzunlugu = %d ",isim,uzunluk);		
}

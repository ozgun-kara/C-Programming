#include <stdio.h>

int main()
{
	char isim [] = "Zidane";				// char isim [100] = "Zidane"; yaz�lsa da uzunluk do�ru bulunur.
	int uzunluk=0;
	
	for(int i=0; isim[i] != NULL ;i++)		// NULL yerine '\0' da yaz�labilir.
	{
			uzunluk++;
	}
	printf("%s isminin uzunlugu = %d ",isim,uzunluk);		
}

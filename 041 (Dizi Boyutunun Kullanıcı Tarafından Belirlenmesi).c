#include <stdio.h>
#include <stdlib.h>		// malloc fonksiyonunu kullanaca��z.

int * dizi_olustur (int * ptr, int size)		// int pointer ve boyut al�p int pointer d�nd�ren fonksiyon.
{
	ptr = (int *)malloc(sizeof(int) * size);	// Burada ptr'ye size x (4 byte) yer a��l�y�or. Not: �kinci * i�areti �arpmad�r.
	return ptr;
}

int main()
{
	int boyut, i;
	printf("Dizi boyutunu belirleyiniz: ");
	scanf("%d", &boyut);
	int * dizi;
	dizi = dizi_olustur(dizi, boyut);	// Bir adresi g�steren dizi pointer� �nceden 4 byte'l�k (tek integer'l�k) 
										// yer tutarken art�k boyut x (4 bytle)'l�k yer tutuyor.  
	
	for (i=0; i<boyut; i++)				// dizi'nin indekslerine boyutu kadar eleman at�l�yor.
		dizi[i] = i;
	for (i=0; i<boyut; i++)		
		printf("%d ", dizi[i]);
}

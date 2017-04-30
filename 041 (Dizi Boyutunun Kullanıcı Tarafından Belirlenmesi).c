#include <stdio.h>
#include <stdlib.h>		// malloc fonksiyonunu kullanacagiz.

int * dizi_olustur (int * ptr, int size)		// int pointer ve boyut alýp int pointer döndüren fonksiyon.
{
	ptr = (int *)malloc(sizeof(int) * size);	// Burada ptr'ye size x (4 byte) yer aciliyor. Not: Ikinci * isareti çarpmadir.
	return ptr;
}

int main()
{
	int boyut, i;
	printf("Dizi boyutunu belirleyiniz: ");
	scanf("%d", &boyut);
	int * dizi;
	dizi = dizi_olustur(dizi, boyut);	// Bir adresi gösteren dizi pointeri önceden 4 byte'lik (tek integer'lik) 
						// yer tutarken artik boyut x (4 bytle)'lik yer tutuyor.  
	
	for (i=0; i<boyut; i++)			// dizi'nin indekslerine boyutu kadar eleman atiliyor.
		dizi[i] = i;
	for (i=0; i<boyut; i++)		
		printf("%d ", dizi[i]);
}

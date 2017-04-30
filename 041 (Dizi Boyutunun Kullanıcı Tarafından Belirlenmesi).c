#include <stdio.h>
#include <stdlib.h>		// malloc fonksiyonunu kullanacaðýz.

int * dizi_olustur (int * ptr, int size)		// int pointer ve boyut alýp int pointer döndüren fonksiyon.
{
	ptr = (int *)malloc(sizeof(int) * size);	// Burada ptr'ye size x (4 byte) yer açýlýyýor. Not: Ýkinci * iþareti çarpmadýr.
	return ptr;
}

int main()
{
	int boyut, i;
	printf("Dizi boyutunu belirleyiniz: ");
	scanf("%d", &boyut);
	int * dizi;
	dizi = dizi_olustur(dizi, boyut);	// Bir adresi gösteren dizi pointerý önceden 4 byte'lýk (tek integer'lýk) 
										// yer tutarken artýk boyut x (4 bytle)'lýk yer tutuyor.  
	
	for (i=0; i<boyut; i++)				// dizi'nin indekslerine boyutu kadar eleman atýlýyor.
		dizi[i] = i;
	for (i=0; i<boyut; i++)		
		printf("%d ", dizi[i]);
}

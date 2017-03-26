#include <stdio.h>

// NOT: Call by Reference i�leminde pointer kullan�ld��� i�in
// x ve y nin adresleri deger_degis fonksiyonuna parametre olarak gitti.
// deger_degis fonksiyonunda bu adresler *a ve *b ifadeleriyle al�n�p 
// o adreslerdeki x ve y nin de�erlerine m�dahale edilmi� oldu.
// B�ylece x ve y nin RAM'de adresleri de�i�medi ama de�erleri de�i�mi� oldu.

void deger_degis(int &a, int &b)
{
	int gecici;
	gecici = a;
	a = b;
	b = gecici;
	printf("a = %d , b = %d \n",a,b);	
}

int main()
{
	int x,y;
	x=5;
	y=10;
	deger_degis(x,y);
	// Yukar�daki fonksiyon �a��r�l�ktan sonra RAM'de a ve b de�i�kenleri yok oluyor.
	printf("x = %d , y = %d \n",x,y);	
}

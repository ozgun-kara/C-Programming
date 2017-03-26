#include <stdio.h>

// NOT: Call by Value i�leminde pointer kullan�lmad��� i�in
// x ve y nin de�erleri deger_degis fonksiyonuna parametre olarak gitti.
// Buna ra�men x ve y nin adresleri ve de�erleri RAM'de de�i�medi. 

void deger_degis(int a, int b)
{
	int gecici;
	gecici = a;
	a = b;
	b = gecici;
	printf("a = %d , b = %d \n",a,b);	// NOT: Buraya printf("x = %d , y = %d \n",a,b); yazmak, x ve y'nin 
}										// de�erleri de�i�ti�i anlam�na gelmez!

int main()
{
	int x,y;
	x=5;
	y=10;
	deger_degis(x,y);
	// Yukar�daki fonksiyon �a��r�l�ktan sonra RAM'de a ve b de�i�kenleri yok oluyor.
	printf("x = %d , y = %d \n",x,y);	
}

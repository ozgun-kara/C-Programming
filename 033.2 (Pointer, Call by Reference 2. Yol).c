#include <stdio.h>

// NOT: Call by Reference iþleminde pointer kullanýldýðý için
// x ve y nin adresleri deger_degis fonksiyonuna parametre olarak gitti.
// deger_degis fonksiyonunda bu adresler *a ve *b ifadeleriyle alýnýp 
// o adreslerdeki x ve y nin deðerlerine müdahale edilmiþ oldu.
// Böylece x ve y nin RAM'de adresleri deðiþmedi ama deðerleri deðiþmiþ oldu.

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
	// Yukarýdaki fonksiyon çaðýrýlýktan sonra RAM'de a ve b deðiþkenleri yok oluyor.
	printf("x = %d , y = %d \n",x,y);	
}

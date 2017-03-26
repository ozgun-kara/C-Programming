#include <stdio.h>

// NOT: Call by Value iþleminde pointer kullanýlmadýðý için
// x ve y nin deðerleri deger_degis fonksiyonuna parametre olarak gitti.
// Buna raðmen x ve y nin adresleri ve deðerleri RAM'de deðiþmedi. 

void deger_degis(int a, int b)
{
	int gecici;
	gecici = a;
	a = b;
	b = gecici;
	printf("a = %d , b = %d \n",a,b);	// NOT: Buraya printf("x = %d , y = %d \n",a,b); yazmak, x ve y'nin 
}										// deðerleri deðiþtiði anlamýna gelmez!

int main()
{
	int x,y;
	x=5;
	y=10;
	deger_degis(x,y);
	// Yukarýdaki fonksiyon çaðýrýlýktan sonra RAM'de a ve b deðiþkenleri yok oluyor.
	printf("x = %d , y = %d \n",x,y);	
}

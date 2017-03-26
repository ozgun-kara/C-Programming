#include <stdio.h>

// NOT: Call by Value işleminde pointer kullanılmadığı için
// x ve y nin değerleri deger_degis fonksiyonuna parametre olarak gitti.
// Buna rağmen x ve y nin adresleri ve değerleri RAM'de değişmedi. 

void deger_degis(int a, int b)
{
	int gecici;
	gecici = a;
	a = b;
	b = gecici;
	printf("a = %d , b = %d \n",a,b);	// NOT: Buraya printf("x = %d , y = %d \n",a,b); yazmak, x ve y'nin 
}						// değerleri değiştiği anlamına gelmez!

int main()
{
	int x,y;
	x=5;
	y=10;
	deger_degis(x,y);
	// Yukarıdaki fonksiyon çağırılıktan sonra RAM'de a ve b değişkenleri yok oluyor.
	printf("x = %d , y = %d \n",x,y);	
}

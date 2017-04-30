#include <stdio.h>

struct Futbolcu
{
	char isim [15];
	int numara;
	int yas;
};

int main()
{
	struct Futbolcu F1;			// F1 isimli Futbolcu nesnesi yaratıldı ama bilgileri girilmedi.
	struct Futbolcu F2 = {"Zidane",10,30};	// struct Futbolcu F2 = {10,"Zidane",30}; şeklinde içerik sırasını değiştirip yazamayız.
	printf("%d ",F2.numara);
	printf("%s ",F2.isim);	
}

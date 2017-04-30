#include <stdio.h>
#include <string.h>

struct Futbolcu
{
	char isim [15];
	int numara;
	int yas;
};

int main()
{
	struct Futbolcu F1 = {"Zidane",10,30};
	struct Futbolcu F2;
	F2 = F1;					//	F2'nin bütün içerikleri F1'in içeriklerine eþitlendi.
	printf("Futbolcu 1:	%s %d %d \n",F1.isim,F1.numara,F1.yas);
	printf("Futbolcu 2:	%s %d %d \n",F2.isim,F2.numara,F2.yas);
	struct Futbolcu F3;
	strcpy(F3.isim,"Raul");		// Bir nesnesinin char dizili içeriði strcpy fonksiyonuyla doldurulur.
	F3.numara = 7;
	F3.yas = 25;
	printf("Futbolcu 3:	%s    %d %d \n",F3.isim,F3.numara,F3.yas);
}

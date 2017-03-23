#include <stdio.h>

int topla (int x, int y)
{
	int toplam;
	toplam = x + y;
	return toplam;		
}

int carp (int x, int y)
{
	return (x*y);		
}

int main()
{
	int sayi1,sayi2;
	printf("1. Sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2. Sayiyi giriniz: ");
	scanf("%d",&sayi2);
	printf("Sayiylarin toplami = %d \n",topla(sayi1,sayi2));
	printf("Sayiylarin carpimi = %d \n",carp(sayi1,sayi2));	
}

#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	printf("1. sayiyi giriniz: \n");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz: \n");
	scanf("%d",&sayi2);	
	
	if (sayi1>sayi2)
		printf("Buyuk olan sayi = %d",sayi1);
	if (sayi2>sayi1)
		printf("Buyuk olan sayi = %d",sayi2);
	else 
		printf("Sayilar esittir");
}


















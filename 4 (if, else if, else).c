#include <stdio.h>

int main()
{
	int sayi1, sayi2,sayi3;
	printf("1. sayiyi giriniz: \n");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz: \n");
	scanf("%d",&sayi2);
	printf("3. sayiyi giriniz: \n");
	scanf("%d",&sayi3);
	
	if (sayi1>sayi2 && sayi1>sayi3)
		printf("Buyuk sayi 1. sayidir");
	else if (sayi2>sayi1 && sayi2>sayi3)
		printf("Buyuk sayi 2. sayidir");
	else 
		printf("Buyuk sayi 3. sayidir");
}

















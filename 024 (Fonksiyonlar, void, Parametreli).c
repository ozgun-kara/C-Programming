#include <stdio.h>

void kontrol (int sayii)	// Not: sayii değişkeni yerine sayi da yazılabilirdi.  							
{				// Fonksiyon içindeki değişkenler, sadece fonksiyon içinde anlamlıdır.
	if (sayii%2==0)
	printf("%d sayisi cifttir\n",sayii);
	else
	printf("%d sayisi tektir\n",sayii);	
}

int main()
{
	int sayi;	
	printf("Bir sayi giriniz: \n");
	scanf("%d",&sayi);
	kontrol(sayi);			
}

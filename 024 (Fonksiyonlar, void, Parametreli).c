#include <stdio.h>

void kontrol (int sayii)	// Not: sayii deðiþkeni yerine sayi da yazýlabilirdi. Fonksiyon içindeki 							
{							// deðiþkenler, sadece fonksiyon içinde anlamlýdýr.
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

#include <stdio.h>

void kontrol (int sayii)	// Not: sayii de�i�keni yerine sayi da yaz�labilirdi. Fonksiyon i�indeki 							
{							// de�i�kenler, sadece fonksiyon i�inde anlaml�d�r.
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

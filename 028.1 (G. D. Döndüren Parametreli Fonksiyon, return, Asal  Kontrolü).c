#include <stdio.h>

//	Asal say�, 2'den kendisine kadar hi�bir say�ya tam b�l�nemeyen say�d�r.

int asal_mi (int sayi)
{
	for(int i=2;i<sayi;i++)
	{
		if (sayi%i==0)
		{
		return 0;			// Fonksiyon, return � g�rd��� anda fonksiyon sonlan�r ve a�a��daki kodlar� g�rmez.
		}			
	}
	return 1;	
}

int main()
{
	int sayi;
	printf("Sayiyi giriniz:\n");
	scanf("%d",&sayi);
	if(asal_mi(sayi) == 1)
		printf("Sayi asaldir.");
	else
		printf("Sayi asal degildir.");	
}

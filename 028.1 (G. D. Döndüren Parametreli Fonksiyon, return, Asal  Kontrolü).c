#include <stdio.h>

// NOT: Asal sayi, 2'den kendisine kadar hiçbir sayiya tam bölünemeyen sayidir.

int asal_mi (int sayi)
{
	for(int i=2;i<sayi;i++)
	{
		if (sayi%i==0)
		{
		return 0;			// Fonksiyon, return ü gördügü anda fonksiyon sonlanir ve asagidaki kodlari görmez.
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

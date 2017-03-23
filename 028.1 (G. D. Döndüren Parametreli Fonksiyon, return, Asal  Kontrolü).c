#include <stdio.h>

//	Asal sayı, 2'den kendisine kadar hiçbir sayıya tam bölünemeyen sayıdır.

int asal_mi (int sayi)
{
	for(int i=2;i<sayi;i++)
	{
		if (sayi%i==0)
		{
		return 0;			// Fonksiyon, return ü gördüğü anda fonksiyon sonlanır ve aşağıdaki kodları görmez.
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

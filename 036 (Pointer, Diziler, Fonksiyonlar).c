#include <stdio.h>

// NOT: Bundan sonraki �rnekte bu i�lemleri pointer ile yapaca��z.

int max_bul(int dizi [], int size)
{
	int max = dizi [0];
	for (int i=0; i<size; i++)
	{
		if (max < dizi[i])
		{
			max = dizi[i];
		}	
	}	
	return max;
}

int main()
{
	int sayilar [] = {40,3,27,85,14};
	printf("Sayilar dizisinin maksimum elemani = %d",max_bul(sayilar,5));	
}

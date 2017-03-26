#include <stdio.h>

int max_bul(int p[0], int size)		// p[0] yerine *p yazilsa da olabilir.
{
	int max = p[0];
	for (int i=0; i<size; i++)
	{
		if (max < p[i])
		{
			max = p[i];
		}	
	}	
	return max;
}

// NOT: Asagidaki fonksiyon, yukaridakinin aynisidir. Pointer gösterimleri farklidir sadece.

/*

int max_bul(int *p, int size)	// pointer görevli p'nin içine sayilar dizisinin baþlangiç adresi gitti.
{
	int max = *p;
	for (int i=0; i<size; i++)
	{
		if (max < *(p+i))
		{
			max = *(p+i);
		}	
	}	
	return max;
}

*/

int main()
{
	int sayilar [] = {40,3,27,85,14};
	printf("Sayilar dizisinin maksimum elemani = %d",max_bul(sayilar,5));	
}

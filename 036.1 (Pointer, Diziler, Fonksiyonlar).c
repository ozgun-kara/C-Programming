#include <stdio.h>

int max_bul(int p[0], int size)		// p[0] yerine *p yaz�lsa da olabilir.
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

//	NOT: A�a��daki fonksiyon, yukar�dakinin ayn�s�d�r. Pointer g�sterimleri farkl�d�r sadece.

/*

int max_bul(int *p, int size)	// pointer g�revli p'nin i�ine sayilar dizisinin ba�lang�� adresi gitti.
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

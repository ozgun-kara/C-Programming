#include <stdio.h>

void topla (int dizi [],int size)
{
	int toplam = 0;
	for (int i=0;i<size;i++)
	{
		toplam = toplam + dizi [i];
	}
	printf("Dizideki elemanlarin toplami = %d",toplam);	
}

int main()
{
	int matris [] = {1,2,3,4,5,6};
	topla(matris,6);					// topla(matris [],6); veya topla(matris [6],6); yazilamaz!	
}

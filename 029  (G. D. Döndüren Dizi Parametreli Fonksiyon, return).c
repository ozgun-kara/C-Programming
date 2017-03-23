#include <stdio.h>

int dizitopla (int dizi1 [],int size1,int dizi2 [],int size2)
{
	int toplam;
	for (int i=0;i<size1;i++)
	{
		toplam = toplam + dizi1 [i] + dizi2 [i];
	}
	return toplam;	
}

int main()
{
	int matris1 [] = {1,2,3,4};
	int matris2 [] = {5,6,7,8};
	printf("matris1 ve matris2'nin elemanlari toplami = %d ",dizitopla(matris1,4,matris2,4));
}

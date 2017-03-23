#include <stdio.h>

void matris_olustur(int dizi [][4],int size)		// (int dizi [][],int size, int size2) yazilmaz. Dizinin ikinin boyutu
{							// belirtilerek, ikinci parametre olarak dizinin ilk boyutu alinir.
	for (int i=0; i<size; i++)
	{
		for (int j=0;j<4;j++)
		{
			dizi[i][j]=10;		
		}
	}
}

int eleman_topla (int dizi [][4],int size)
{
	int toplam = 0;
	for (int i=0;i<size;i++)
	{
		for (int j=0;j<4;j++)
		{
		toplam = toplam + dizi [i][j];
		}	
	}
	return toplam;	
}

int main()
{
	int matris [3][4];
	matris_olustur(matris,3); 			// 3, burada matris'in ilk boyutudur ve girilmesi zorunludur.
	printf("Matrisin elemanlari toplami = %d ",eleman_topla(matris,3));
}

#include <stdio.h>

void dizi_olustur(int dizi[],int boyut)
{
	for (int i=0; i <= boyut; i++)
	{
		dizi[i] = i;						// Fonksiyona gönderilen matris iþlendi ve elemanlara sahip oldu.
	}		
}

int main()
{
	int size;
	printf("Dizinin boyutunu giriniz:");
	scanf("%d",&size);
	int matris [size];
	dizi_olustur(matris,size);
	printf("Dizinin elemanlari: ");
	for (int i=0; i <= size; i++)	
	{
		printf("%d ",matris[i]);
	}			
}

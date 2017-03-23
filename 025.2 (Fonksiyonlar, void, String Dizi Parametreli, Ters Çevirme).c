#include <stdio.h>
#include <string.h>

void ters_cevir(char dizi [])
{
	int uzunluk, gecici;
	uzunluk = strlen(dizi);				//	Dizinin boyutu belirlendi.
	
	for (int i=0; i<uzunluk/2; i++)
	{
		gecici = dizi[i];
		dizi[i] = dizi[uzunluk -1-i];
		dizi[uzunluk -1-i] = gecici;
	}	
}

int main()
{
	char isim[100];
	printf("Metni giriniz:\n");
	scanf("%s",isim);
	ters_cevir(isim);
	printf("%s",isim);	
}

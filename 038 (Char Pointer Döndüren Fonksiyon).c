#include <stdio.h>
#include <string.h>

char * yeni_dizi (char * ptr, int indeks)		// Bu fonksiyon, char i�eri�i olan bir adres d�nd�recek.
{
	int uzunluk = strlen(ptr);
	
	if(uzunluk < indeks)
	{
		return NULL;			// uzunluk < indeks durumunda fonksiyonun RAM'de alakas�z yerin adresini 
	}							// d�nd�rmemesi i�in NULL d�n��� yap�ld�. return '\0'; da yaz�labilir.
	else
	{
		return ptr+indeks;
	}
}
	
int main()
{
	char isim [] = "Zidane";
	printf("Fonksiyonsuz yazdirdik: %s \n",isim+2);
	char * p;					// char i�erikli bir ba�lang�� adresi alacak �ekilde pointer p olu�turduk.
	p = yeni_dizi(isim,2);		// Fonksiyondan d�nen (isim+2)'nin ba�lang�� adresi, 
								// pointer olan p'ye atand�. Yani p, isim dizinin 2. indeksini g�steriyor.
	if(p==NULL)
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}	
}

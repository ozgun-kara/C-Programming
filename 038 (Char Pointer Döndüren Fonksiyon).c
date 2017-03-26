#include <stdio.h>
#include <string.h>

char * yeni_dizi (char * ptr, int indeks)		// Bu fonksiyon, char içeriði olan bir adres döndürecek.
{
	int uzunluk = strlen(ptr);
	
	if(uzunluk < indeks)
	{
		return NULL;			// uzunluk < indeks durumunda fonksiyonun RAM'de alakasýz yerin adresini 
	}							// döndürmemesi için NULL dönüþü yapýldý. return '\0'; da yazýlabilir.
	else
	{
		return ptr+indeks;
	}
}
	
int main()
{
	char isim [] = "Zidane";
	printf("Fonksiyonsuz yazdirdik: %s \n",isim+2);
	char * p;					// char içerikli bir baþlangýç adresi alacak þekilde pointer p oluþturduk.
	p = yeni_dizi(isim,2);		// Fonksiyondan dönen (isim+2)'nin baþlangýç adresi, 
								// pointer olan p'ye atandý. Yani p, isim dizinin 2. indeksini gösteriyor.
	if(p==NULL)
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}	
}

#include <stdio.h>
#include <string.h>

char * yeni_dizi (char * ptr, int indeks)		// Bu fonksiyon, char içeriği olan bir adres döndürecek.
{
	int uzunluk = strlen(ptr);
	
	if(uzunluk < indeks)
	{
		return NULL;			// uzunluk < indeks durumunda fonksiyonun RAM'de alakasız yerin adresini 
	}					// döndürmemesi için NULL dönüşü yapıldı. return '\0'; da yazılabilir.
	else
	{
		return ptr+indeks;
	}
}
	
int main()
{
	char isim [] = "Zidane";
	printf("Fonksiyonsuz yazdirdik: %s \n",isim+2);
	char * p;						// char içerikli bir başlangıç adresi alacak şekilde pointer p oluşturduk.
	p = yeni_dizi(isim,2);					// Fonksiyondan dönen (isim+2)'nin başlangıç adresi, 
								// pointer olan p'ye atandı. Yani p, isim dizinin 2. indeksini gösteriyor.
	if(p==NULL)
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}	
}

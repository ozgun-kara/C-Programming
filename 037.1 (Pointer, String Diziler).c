#include <stdio.h>

//	NOT: String dizilere, diðer dizilerden farklý olarak 
//	son kutucuða bilgisayar tarafýndan '\0' (null) karakteri eklenir. 

int uzunluk_bul(char *p)		// Bu fonksiyona gönderilen dizi'nin baþlangýç adresi p'ye gitti.
{
	int uzunluk = 0;
	for	(int i=0; p[i] != '\0'; i++)		//	En son p[5] saðlanýr. p[6] == '\0' olduðu için döngüden çýkar. 
	{
		uzunluk++;	
	}
	return uzunluk;	
}

int main()
{
	char dizi [] = "Zidane";
	printf("%s metninin uzunlugu = %d \n",dizi,uzunluk_bul(dizi));
}

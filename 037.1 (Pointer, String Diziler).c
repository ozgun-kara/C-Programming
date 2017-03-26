#include <stdio.h>

//	NOT: String dizilere, di�er dizilerden farkl� olarak 
//	son kutucu�a bilgisayar taraf�ndan '\0' (null) karakteri eklenir. 

int uzunluk_bul(char *p)		// Bu fonksiyona g�nderilen dizi'nin ba�lang�� adresi p'ye gitti.
{
	int uzunluk = 0;
	for	(int i=0; p[i] != '\0'; i++)		//	En son p[5] sa�lan�r. p[6] == '\0' oldu�u i�in d�ng�den ��kar. 
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

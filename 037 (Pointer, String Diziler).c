#include <stdio.h>

//	NOT: String dizilere, di�er dizilerden farkl� olarak 
//	son kutucu�a bilgisayar taraf�ndan '\0' (null) karakteri eklenir. 

int main()
{
	char dizi [] = "Zidane";
	char * p;
	p = dizi;					//	p = &dizi[0]; da yaz�labilirdi. Metnin ilk karakterinin ba�lang�� adresi p'ye atand�.
	printf("%s \n",p);
	printf("%s \n",p+1);	
}

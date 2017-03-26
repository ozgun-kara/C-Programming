#include <stdio.h>

//	NOT: String dizilere, diðer dizilerden farklý olarak 
//	son kutucuða bilgisayar tarafýndan '\0' (null) karakteri eklenir. 

int main()
{
	char dizi [] = "Zidane";
	char * p;
	p = dizi;					//	p = &dizi[0]; da yazýlabilirdi. Metnin ilk karakterinin baþlangýç adresi p'ye atandý.
	printf("%s \n",p);
	printf("%s \n",p+1);	
}

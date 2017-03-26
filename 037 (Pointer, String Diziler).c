#include <stdio.h>

// NOT: String dizilere, diğer dizilerden farklı olarak 
// son kutucuğa bilgisayar tarafından '\0' (null) karakteri eklenir. 

int main()
{
	char dizi [] = "Zidane";
	char * p;
	p = dizi;			// p = &dizi[0]; da yazılabilirdi. Metnin ilk karakterinin başlangıç adresi p'ye atandı.
	printf("%s \n",p);
	printf("%s \n",p+1);	
}

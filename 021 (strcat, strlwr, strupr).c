#include <stdio.h>
#include <string.h>

int main()
{	
	char mesaj1 [] = "Hello ", mesaj2 [] = "World";
	char ad1 [] ="ZINEDINE", ad2[]="zidane";
	strcat(mesaj1,mesaj2);					// mesaj2'yi mesaj1'e ekledi. 
	printf("%s\n",mesaj1);
	printf("%s\n",strlwr(ad1));				// ad1'in bütün harflerini küçük harfe dönüþtürdü.
	printf("%s\n",strupr(ad2));				// ad2'nin bütün harflerini büyük harfe dönüþtürdü.
}

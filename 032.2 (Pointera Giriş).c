#include <stdio.h>

int main()
{
	int i=5, j=10;
	int * ip, * jp;
	ip = &i;
	jp = ip;			// i'nin adresini tutan ip, jp'ye eşitlendi. Yani jp artık i'nin adresini tutuyor ip gibi.
	++(*jp);			// i değeri 1 arttı. Bu ifade ++(*ip) ve ++i'ye eşittir.
	printf("i = %d, j = %d \n",i,j);
	printf("ip'nin adresindeki deger = %d, jp'nin adresindeki deger j = %d \n",*ip,*jp);
	//NOT: Bütün bu işlemlere rağmen i ve j nin adresleri baştan beri farklıdır ve değişmedi.
}

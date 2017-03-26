#include <stdio.h>

int main()
{
	int i=5, j=10;
	int * ip, * jp;
	ip = &i;
	jp = ip;			//	i'nin adresini tutan ip, jp'ye eþitlendi. Yani jp artýk i'nin adresini tutuyor ip gibi.
	++(*jp);			// i deðeri 1 arttý. Bu ifade ++(*ip) ve ++i'ye eþittir.
	printf("i = %d, j = %d \n",i,j);
	printf("ip'nin adresindeki deger = %d, jp'nin adresindeki deger j = %d \n",*ip,*jp);
	//NOT: Bütün bu iþlemlere raðmen i ve j nin adresleri baþtan beri farklýdýr ve deðiþmedi.
}

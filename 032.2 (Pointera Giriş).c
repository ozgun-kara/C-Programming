#include <stdio.h>

int main()
{
	int i=5, j=10;
	int * ip, * jp;
	ip = &i;
	jp = ip;			//	i'nin adresini tutan ip, jp'ye e�itlendi. Yani jp art�k i'nin adresini tutuyor ip gibi.
	++(*jp);			// i de�eri 1 artt�. Bu ifade ++(*ip) ve ++i'ye e�ittir.
	printf("i = %d, j = %d \n",i,j);
	printf("ip'nin adresindeki deger = %d, jp'nin adresindeki deger j = %d \n",*ip,*jp);
	//NOT: B�t�n bu i�lemlere ra�men i ve j nin adresleri ba�tan beri farkl�d�r ve de�i�medi.
}

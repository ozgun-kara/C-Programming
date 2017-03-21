#include <stdio.h>

main()
{
	char isim1 [8] = "Tallica";
	char isim2 [] = "Tallica";
	char isim3 [] = {'T','a','l','l','i','c','a','\0'};
	char isim4 [3][15] = {"Tugce","Volkan","Hakan"};
	
	printf("%s\n",isim1);
	printf("%s\n",isim2);
	printf("%s\n",isim3);
	printf("%s\n",isim4[0]);
	printf("%s\n",isim4[1]);
	printf("%s\n",isim4[2]);
	printf("%s\n",isim4);		// indis yazýlmadýðý için 0. indisindeki string deðeri olan "Tugce" yi yazdýrýr.
}

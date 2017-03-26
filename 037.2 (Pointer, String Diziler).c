#include <stdio.h>

int main()
{
	char isim [] = "Zidane";
	char sehir1 [] = {'I','s','t','a','n','b','u','l','\0'};	// char sehir1 [] = {'I','s','t','a','n','b','u','l'}; da yazýlabilirdi.
	char sehir2 [] = "Ankara";
	char * p;
	p = &isim [0];
	printf("%c\n",isim[0]);
	printf("%s\n",p);		
	printf("%s\n",p+1);	
	printf("%c\n",p[2]);			// printf("%c\n",p+2); yazýlamaz. Kod çalýþýr ama alakasýz çýktý verir.		
	printf("%c\n",*(p+2));
	printf("----------------\n");
	printf("%s\n",sehir1);
	printf("%s\n",sehir2);
	printf("%c\n",*(sehir1+4));
	printf("%c\n",sehir1[4]);
	printf("%c\n",*(sehir2+4));
}

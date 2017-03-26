#include <stdio.h>

int main()
{
	int a = 5;
	float b = 3.2;
	double c = 3.412;
	char d = 'a';
	int dizi [] = {10,20,30,40,50};
	
	int * ap;
	ap = &a;
	float * bp;
	bp = &b;
	double * cp;
	cp = &c;
	char * dp;
	dp = &d;
	int * dizip;
	dizip = &dizi[1];
	
	printf("%p adresindeki int in degeri = %d \n",ap,*ap);
	printf("%p adresindeki float in degeri = %.2f \n",bp,*bp);
	printf("%p adresindeki double in degeri = %.2f \n",cp,*cp);		// %lf de yazilabilir. lf, double in format belirleyicisidir.
	printf("%p adresindeki char in degeri = %c \n",dp,*dp);
	printf("%p adresindeki int in degeri = %d \n",dizi,*dizip);
}

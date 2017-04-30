#include <stdio.h>
#include <string.h>

struct motor
{
	int hp;
	char made_in [15];
};

struct araba
{
	char marka [15];
	int model;
	struct motor mtr;		// motor nesnesi tipinde bir mtr yap�s�, araba nesnesinin i�eriklerinden biri olarak tasarland�.	
};

//	NOT: araba struct'�nda motor struct'� kullan�ld��� i�in �nce motor struct'� kod sayfas�nda tan�mland�.

int main()
{
	struct araba A1;
	strcpy(A1.marka,"BMW");
	A1.model = 1995;
	A1.mtr.hp = 160;
	strcpy(A1.mtr.made_in,"Germany");
	printf("%s	%d %d %s	\n",A1.marka, A1.model, A1.mtr.hp, A1.mtr.made_in);	
	
	struct araba A2 = {"Renault",2004,{150,"France"}};
	printf("%s %d %d %s	\n",A2.marka, A2.model, A2.mtr.hp, A2.mtr.made_in);	
}

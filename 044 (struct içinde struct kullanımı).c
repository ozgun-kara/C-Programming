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
	struct motor mtr;		// motor nesnesi tipinde bir mtr yapýsý, araba nesnesinin içeriklerinden biri olarak tasarlandý.	
};

//	NOT: araba struct'ýnda motor struct'ý kullanýldýðý için önce motor struct'ý kod sayfasýnda tanýmlandý.

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

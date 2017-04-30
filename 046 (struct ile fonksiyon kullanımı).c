#include <stdio.h>

struct Futbolcu
{
	char ad [20];
	char takim [20];
	int yas;

};

void Futbolcu_Bilgisi_Yaz (struct Futbolcu f)
{
	printf("%s	%s %d \n",f.ad,f.takim,f.yas);	
}

int main()
{
	struct Futbolcu F1 = {"Zidane","JUVENTUS",27};
	Futbolcu_Bilgisi_Yaz(F1);
}

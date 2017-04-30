#include <stdio.h>

struct Futbolcu
{
	char ad [20];
	char takim [20];
	int yas;
};

void Futbolcu_Bilgi (struct Futbolcu * f)
{
	printf("%s %s %d \n",f -> ad, f -> takim, f -> yas);
}

int main()
{
	struct Futbolcu F1 = {"Lampard","CHELSEA",30};
	Futbolcu_Bilgi(&F1);
}

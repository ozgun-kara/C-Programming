#include <stdio.h>
#include <string.h>

struct Futbolcu
{
	char ad [20];
	char takim [20];
	int yas;
};

struct Futbolcu * Futbolcu_Uret (struct Futbolcu * f)	// 	Adresi girilen struct'ýn Call by Reference yöntemiyle verilerini doldurup 
{														//	geriye Futbolcu tipinde struct iþaretçi döndüren fonksiyon tanýmlandý.
	strcpy(f -> ad, "Isimsiz");										
	strcpy(f -> takim, "Belirtilmemis");
	f -> yas = 18;	
	
	// 	NOT: Yukarýdaki veri giriþleri yerine aþaðýdaki kodlar da yazýlabilirdi
	//			struct Futbolcu f2 = {"Isimsiz","Belirtilmemis",18};
	//			*f = f2;
	
	return f;	
}

void Futbolcu_Bilgi (struct Futbolcu * f)
{
	printf("%s %s %d \n",f -> ad, f -> takim, f -> yas);
}

int main()
{
	struct Futbolcu F1 = {"Lampard","CHELSEA",30};
	Futbolcu_Bilgi(&F1);
	struct Futbolcu F2;		//	NOT: struct Futbolcu F2 = Futbolcu_Uret(&F2); kodu çalýþmaz!
	Futbolcu_Uret(&F2);
	Futbolcu_Bilgi(&F2);
}

// 4 basamakli sayilarin rakamlarini toplayan program

#include<stdio.h>

int main()
{
	int sayi,bolum,kalan,toplam;
	toplam=0;
	printf("lutfen 4 basamakli bir sayi girin.");
	scanf("%d",&sayi);
	
	while(sayi<1000 || sayi>=10000){
		printf("4 basamakli degil.");
		scanf("%d",&sayi);
	}
	
	printf("sayiniz: %d\n",sayi);
	// binler basamagi
	bolum=sayi/1000;
	toplam+=bolum;
	kalan=sayi%1000;
	// yuzler basamagi
	bolum=kalan/100;
	toplam+=bolum;
	kalan=kalan%100;
	//onlar basamagi
	bolum=kalan/10;
	toplam+=bolum;
	kalan=kalan%10;
	//birler basamagi
	bolum=kalan/1;
	toplam+=bolum;
	kalan=kalan%1;
	
	printf("toplaminiz :%d",toplam);
	
	
	return 0;
}

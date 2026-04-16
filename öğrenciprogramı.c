	#include<stdio.h>
/*maximum 50 tane ogrencinin bulundugu bir siniftaki notlarin veogrenci numaralarinin iliskisi*/
int main()
{
	int size,kontrol=0,control=0;
	int max=0,min=100;
	int minIndex,maxIndex;
	printf("Ogrenci mevcudu:");
	scanf("%d",&size);
	
	while(size>50){    //onemli satir 100denfazla olamaz.
	printf("gecersiz sayi bir daha girin\n");
	scanf("%d",&size);
	}
	kontrol=1;
	
	int studentNo[50],notes[50],i;
	
	for(i=0;i<size;i++)
	{
		printf("ogrenci numarasi ve notu :");
		scanf("%d %d",&studentNo[i],&notes[i]);
	
	while(studentNo[i]>1000 || notes[i]>100){
		printf("imkansiz input tekrar girin\n");
		scanf("%d %d",&studentNo[i],&notes[i]);
	}
	control=1;
	}
	
	for(i=0;i<size;i++)
	{
		if(notes[i]>max){
		max=notes[i];
		maxIndex=i;
		}
		
		if(notes[i]<min){
		min=notes[i];
		minIndex=i;
		}
	}
	//printf("%d %d",min,max); kontrol satiri
	printf("%d numarali ogrencinin notu %d olup siniftaki en yuksek notu almistir.\n",studentNo[maxIndex],max);
	
	printf("%d numarali ogrencinin notu %d olup siniftaki en dusuk notu almistir.",studentNo[minIndex],min);
	
	return 0;
	
}


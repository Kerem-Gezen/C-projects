#include<stdio.h>

void swapfun(int kerem[],int i, int j);
int main()
{
	int i,j;
	int kerem[5];
	printf("5 tane integer array girin.\n");
	
	for(int a=0; a<sizeof(kerem)/4 ;a++){
		scanf("%d",&kerem[a]);
	}
	
	printf("girdiginiz array kerem[]={ ");
	for(int a=0; a<sizeof(kerem)/4 ;a++){
		printf("%d ",kerem[a]);
	}
	printf("}\n");
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++){
			
			if(kerem[j]<kerem[i]){
				
			swapfun(kerem,i,j);	
			}
		}
	}
	
	printf("Arrayin siralanmis hali: ");
	for(i=0; i<5; i++)
	printf("%d ",kerem[i]);
	
	return 0;
}

void swapfun(int kerem[],int i, int j){
	
	int min=kerem[i];
	kerem[i]=kerem[j];
	kerem[j]=min;
	
}

#include<stdio.h>

void swap(int keremA[], int i,int j);

	int main()
{
	int i,j,m;
	int keremA[]={5,4,23,1,243,45};
	
	for(i=0;i<sizeof(keremA)/sizeof(keremA[0]);i++)
	{
		for(j=i+1;j<sizeof(keremA)/sizeof(keremA[0]);j++){
			
			if(keremA[j]<keremA[i]){
		
			swap(keremA,i,j);
			}		
		}
	}
	
	for(m=0; m<sizeof(keremA)/4; m++)
	printf("%d ",keremA[m]);

	return 0;	
}

void swap(int keremA[],int i,int j)
{
	int min=keremA[i];
	keremA[i]=keremA[j];
	keremA[j]=min;	
}
	


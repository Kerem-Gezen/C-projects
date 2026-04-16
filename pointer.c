#include<stdio.h>
void printfFun(int kerem[2][2],int num,int *degnum);
void main()
{
	int kerem[2][2]={12,24,45,7};
	int degnum=4;
	int *ptr;
	ptr=&degnum;
	printf("before\n");
	printf("degnum is %d:\n",degnum);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++){
			printf("%d,\t",kerem[i][j]);
		}	
	}
	printfFun(kerem,7,ptr);	
	
	printf("After\n");
	printf("deg num is: %d",degnum);
}

void printfFun(int kerem[2][2],int num,int *degnum){

	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++){
			kerem[i][j]+=10;
		}
	}
	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++){
			printf("\n %d,\t",kerem[i][j]);
	}
}
	*degnum=*degnum+num;
}


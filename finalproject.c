#include <stdio.h>
#include <stdlib.h>

	int homework,midtermexam,lab,finalproject,quiz,choose,secim;
	float result1,result2,result3,result4,finalkatki,final;
	float harfnotu[]={90,85,70,65,60,55,50};
	
	
	int main(){
		
	printf("Welcome to Grade Passer Calculator\n");
	printf("\n\n");
	printf("1-MATH\n2-PHYSIC\n3-COMPUTER PROGRAMMING\n4-INTRODUCTON TO COMPUTER ENGINEERING\n");
	printf("Which lesson do you want to calculate:");
	scanf("%d",&choose);
			if(choose<1 || choose>4){
			printf("Invalid choice! Please choose a lesson between 1 to 4!");
			return 0;
			}
	printf("Which grade letter do you want to pass with:(1-AA,2-BA,3-BB,4-CB,5-CC,6-DC,7-DD):");
	scanf(" %d",&secim);
			if(secim<1 || secim>7){
			printf("Invalid choice! Please choose a valid grade between 1 to 7!");
			return 0;
			}
	switch(choose){
		case 1:
				printf("Math midterm result: ");
				scanf("%d",&midtermexam);
				printf("Math quiz result: ");
				scanf("%d",&quiz);
				printf("Math homework result: ");
				scanf("%d",&homework);
				printf("Final exam contribution percentage (example:%%60 is 60): ");
				scanf("%f",&finalkatki);
			result1=midtermexam *30.0/100.0;
			result2=quiz *10.0/100.0;
			result3=homework *10.0/100.0;
			finalkatki=finalkatki/100.0;
			final=(harfnotu[secim-1]-(result1+result2+result3))/finalkatki;
			
			if(final>100){
				printf("Impossible to pass.");
			}
			else {
				printf("The minimum final exam grade to pass with: %.2f\n",final);
			} 
			break;
			
		case 2:
			printf("Physic midtermexam result : ");
			scanf("%d",&midtermexam);
			printf("Physic quiz result : ");
			scanf("%d",&quiz);
			printf("Physic homework result : ");
			scanf("%d",&homework);
			printf("Physic lab result: ");
			scanf("%d",&lab);
			printf("Final exam contribution percentage (example:%%60 is 60): \n");
			scanf("%f",&finalkatki);
			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 5.0 / 100.0;
    		result3 = lab * 5.0/ 100.0;
    		result4 = homework *5.0 /100.0;
    		finalkatki = finalkatki /100.0;
    		final=(harfnotu[secim-1]-(result1+result2+result3+result4))/finalkatki;
    		if (final>100){
				printf("Impossible to pass.");	
			}
			else {
				printf("The minimum final exam grade to pass with: %.2f\n", final);
			}
			break;
		case 3 : 
			printf("Comp.Programming midtermexam result : ");
			scanf("%d",&midtermexam);
			printf("Comp.Programming quiz result : ");
			scanf("%d",&quiz);
			printf("Comp.Programming homework result : ");
			scanf("%d",&homework);
			printf("Final project result: ");
			scanf("%d",&finalproject);
			printf("Final exam contribution percentage (example:%%60 is : 60) : ");
			scanf("%f",&finalkatki);
			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 10.0 / 100.0;
    		result3 = homework * 10.0 /100.0;
    		result4 = finalproject * 25.0/100.0;
    		finalkatki = finalkatki /100.0;
    		final=(harfnotu[secim-1]-(result1+result2+result3+result4))/finalkatki;
    		if (final>100){
				printf("Impossible to pass.");	
			}
			else {
				printf("The minimum final exam grade to pass with: %.2f\n", final);
			}
			break;
    	case 4 : 
			printf("Introduction to C.E midterm exam : ");
			scanf("%d",&midtermexam);
			printf("Quiz result : ");
			scanf("%d",&quiz);
			printf("Homework result : ");
			scanf("%d",&homework);
			printf("Final exam contribution percentage (example:%%60 is : 60) : ");
			scanf("%f",&finalkatki);
			result1	= midtermexam * 30.0 / 100.0;
    		result2 = quiz * 10.0 / 100.0;
    		result3 = homework *10.0 /100.0;
    		finalkatki = finalkatki /100.0;
    		final=(harfnotu[secim-1]-(result1+result2+result3))/finalkatki;	
    		if (final>100){
				printf("Impossible to pass.");	
			}
			else {
				printf("The minimum final exam grade to pass with : %.2f\n", final);
			}
			break;
}
	return 0;	
	
	}


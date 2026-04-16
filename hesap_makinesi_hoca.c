#include <stdio.h>
#include <stdlib.h>

	void vowel_fun();
	void larg_fun();
	void factorial_fun();
	void sum_int_fun();
	void calc_fun();


int main()
{
	int num;
	printf("Welcome to the multifunctional calculater.\n\n");
	printf("Please choose a process: \n\n");
	printf("1-Vowel and Consonant\n2-Largest Number\n3-Factorial\n4-Sum of five integer numbers\n5-Basic Calculater\n");
	scanf("%d", &num);
	switch(num){
		case 1:vowel_fun();break;
		case 2:larg_fun();break;
		case 3:factorial_fun();break;
		case 4:sum_int_fun();break;
		case 5:calc_fun();break;
	}
	
    return 0;
}

//'aA', 'eE', 'iI', 'oO', 'uU'

void vowel_fun()
{
    char c;
    int lower_v, upper_v;

    printf("enter an alph: ");
    scanf(" %c", &c);
    lower_v = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper_v = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(lower_v || upper_v)
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);

}
void larg_fun()
{
    double n1, n2, n3;

    printf("Enter three numbers:");
    scanf(" %lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);
}

void factorial_fun()
{
    //5 - 1*2*3*4*5
    int n, i;
    unsigned long fact = 1;
    printf("enter an int: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! only positive");
    else{
        for(i=1; i <= n; ++i){
            fact *= i;
		}
        printf("factorial of %d = %lu", n, fact);
    }

}
void sum_int_fun()
{
    int i;
    double number, sum = 0.0;

    for (i=1; i <= 5; ++i){
        printf("Enter n%d: ", i);
        scanf("%lf", &number);
        if (number < 0.0){
            continue;
        }
        sum += number;

    }
    printf("sum = %.2lf", sum);
}

void calc_fun()
{
    char op;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Baþýndaki boþluk, önceki giriþten kalan karakterleri temizler
    printf("Enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
    case '+':
        printf("%lf + %lf = %lf\n", first, second, first + second);
        break;
    case '-':
        printf("%lf - %lf = %lf\n", first, second, first - second);
        break;
    case '*':
        printf("%lf * %lf = %lf\n", first, second, first * second);
        break;
    case '/':
        // Sýfýra bölme hatasýndan kaçýnmak için tekrar giriþ alacaðýmýz bir döngü
        while (second == 0) {
            printf("Error! Division by zero is undefined.\n");
            printf("Please enter a non-zero denominator: ");
            scanf("%lf", &second);
        }
        printf("%lf / %lf = %lf\n", first, second, first / second);
        break;
    default:
        printf("Error! Operator is not correct.\n");
    
}
}


	
	







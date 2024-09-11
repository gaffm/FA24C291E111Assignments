#include <stdio.h>
int main(){
	int a,b;//initializes 2 ints
	printf("Enter the first number: ");//asks for 1st number
	scanf("%d",&a);//gets first number
	printf("Enter the second number: ");//asks for second number
	scanf("%d",&b);//gets second number
	printf("The sum of %d and %d is %d.\n",a,b,a+b);//prints sum
	printf("The difference of %d and %d is %d.\n",a,b,a-b);//prints difference
	printf("The product of %d and %d is %d.\n",a,b,a*b);//prints product
	printf("The division of %d and %d is %.2f.\n",a,b,(double)a/b);//prints the divison
	printf("The remainder of %d and %d is %d.\n",a,b,a%b);//prints the remainder
	return 1;//to exit program
}

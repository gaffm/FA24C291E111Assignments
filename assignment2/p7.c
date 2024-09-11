#include <stdio.h> //includes standard input output library
int main(){ //signals main
	int r; //instantiates r
	const float PI = 3.14;//defines PI as a constant
	printf("Enter the radius: ");//asks for radius
	scanf("%d",&r);//gets radius
	printf("The diameter of a circle with a radius of %d is %d.\n",r,2*r);//prints diameter
	printf("The area of a circle with a radius of %d is %.0f.\n",r,PI*r*r);//prints area as shown in assignment
	printf("The circumference of a circle with a radius of %d is %.0f.\n",r,2*PI*r);//prints circumference as shown in assignment
	return 1;//signals end of program
}

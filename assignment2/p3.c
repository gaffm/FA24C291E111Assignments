#include <stdio.h>

int main(){
	int day, month, curYear, birthYear;
	day = month = curYear = birthYear = 0;
	printf("Enter current day: ");
	scanf("%d",&day);
	printf("Enter current month: ");
	scanf("%d",&month);
	printf("Enter current year: ");
	scanf("%d",&curYear);
	printf("Enter your birth year: ");
	scanf("%d",&birthYear);
	printf("Today is %d/%d/%d, and you are %d years old.\n",day,month,curYear,curYear-birthYear);
	return 1;
}

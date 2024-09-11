#include <stdio.h>
int main(){
	int c = 0;
	printf("Enter the temperature in Celsius: ");
	scanf("%d",&c);
	if(c < -10) printf("Freezing\n");
	else if(c<=10) printf("Cold\n");
	else if(c<25) printf("Moderate\n");
	else printf("Hot\n");
	return 1;
}

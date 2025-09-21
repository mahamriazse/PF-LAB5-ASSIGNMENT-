
#include <stdio.h>
int main(){
	int num1;
	int num2;
    printf("enter your number\n");
    scanf("%d %d",&num1,&num2);
    (num1>num2)? printf("num1 is greater than num2") : printf("num2 is greater than num1");
    
	return 0;
}

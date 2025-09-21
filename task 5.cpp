
#include <stdio.h>
int main(){
	int num1;
	int num2;
    printf("enter your number\n");
    scanf("%d %d",&num1,&num2);
    if ((num1 % 3 ==0 && num1 % 5==0 ) && (num2 % 3==0 && num2 % 5 ==0)){
    	printf("number is divisible by 3 and 5");
	}
	else {
		printf("number is not divisible by 3 and 5");
	}
	return 0;
}

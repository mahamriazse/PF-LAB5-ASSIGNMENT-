
#include <stdio.h>
int main(){
	int amount;
	printf("how much amount do you want to withdraw\n");
	scanf("%d",&amount);
	if ((amount<= 500) && (amount * 20)){
		printf("withdrawl approved");
	}
	else {
		printf("withdrawl denied");
	}

    return 0;
}

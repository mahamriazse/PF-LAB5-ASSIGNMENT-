#include <stdio.h>
int main(){
int age ;
printf("enter your age");
scanf("%d",&age);
if (age<=1 && age<=10){
	printf("you are a child");
}
else if (age>=11 && age<=19){
	printf("you are a teenager");
	
}
else if (age>=20 && age <=50){
	printf("youa are a middle person");
}
else if (age >=51){
	printf("tou are a senior person");
}
else { printf("you are a newborn");
}
return 0;
}
   

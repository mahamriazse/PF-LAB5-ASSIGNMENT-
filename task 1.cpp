#include <stdio.h>
int main(){
	char csolor;
	char red,yellow,green;
	printf("enter any color : \n1. r =red \n 2.y=yellow \n 3.g= green\n");
	scanf("%c",&color);
	
	if (color == 'r'){
		printf("stop");
	}
 else  if (color == 'y'){
	printf("caution");
	
}
 else if (color == 'g'){
	printf("go");
	
}
else {
	printf("wrong color entered");
}
return 0;
}
  
   

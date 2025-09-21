
#include <stdio.h>
int main(){
 int rating;
 printf("rate movie :the lion king \n");
 printf("5=excellent\n 4=good\n 3=avg \n 2=poor \n 1= terrible\n");
    scanf("%d",&rating);
    if (rating == 5) {
        printf("You rated it: Excellent\n");
    } else if (rating == 4) {
        printf("You rated it: Good\n");
    } else if (rating == 3) {
        printf("You rated it: Average\n");
    } else if (rating == 2) {
        printf("You rated it: Poor\n");
    } else if (rating == 1) {
        printf("You rated it: Terrible\n");
    } else {
        printf("Invalid rating, Please enter a number between 1 and 5\n");
    }
	return 0;
}

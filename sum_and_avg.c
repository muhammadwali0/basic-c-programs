#include <stdio.h>

int main(){
int number, number2, number3, sum;
float avg;
printf("Enter an integer: \n");
scanf("%d", &number);
printf("Enter another integer: \n");
scanf("%d", &number2);
printf("Enter another integer: \n");
scanf("%d", &number3);
sum=number+number2+number3;
avg=sum/3.0;
printf("The sum of these three numbers is %d.\nThe average of these numbers is %f.\
n", sum, avg);
return 0;
}

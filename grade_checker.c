#include <stdio.h>

int main(){
float marks;
printf("Enter your marks: ");
scanf("%f", &marks);
if (marks>=90){
printf("Congratulations, You got A grade.\n");
}
else{
if(marks>=80){
printf("Congratulations, You got B grade.\n");
}
else{
if(marks>=70){
printf("Not bad! You got C grade.\n");
}
else{
if(marks>=60){
printf("You got D grade.\n");
}
else{
printf("Oops! You got F grade.\n");
}
}
}
}
return 0;
}

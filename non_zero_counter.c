#include <stdio.h>

int main(){

        int i=0;

        for(;;){
                int number;
                printf("Enter an Integer: ");
                scanf("%d", &number);
                if(number!=0){
                        i+=1;
                }
                printf("Number of Inputs: %d\n", i);
        }

        return 0;
}

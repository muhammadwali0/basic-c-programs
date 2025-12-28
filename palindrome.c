#include <stdio.h>

int main(){                                                                         
        int number, i, j, reversed, ognum;                                          
                                                                                    
        printf("Enter an integer: ");                                               
        scanf("%d", &number);                                                       
                                                                                    
        ognum = number;                                                             
                                                                                    
        for(i = 1, number = ognum; number != 0; number /= 10, i++){                 
                j = i;                                                              
        }                                                                           
                                                                                    
        number = ognum;                                                             
        reversed = 0;                                                               
                                                                                    
        for(; number != 0; number /= 10){                                           
                reversed = reversed * 10 + (number % 10);                           
        }                                                                           
                                                                                    
        if(reversed == ognum){                                                      
                printf("The %d digit number you entered is a palindrome.\n", j);    
        }                                                                           
        else{                                                                       
                printf("The %d digit number you entered is not a palindrome.\n", j);
        }                                                                           
                                                                                    
        return 0;                                                                   
}                                                                                   

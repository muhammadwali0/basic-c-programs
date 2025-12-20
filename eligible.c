#include <stdio.h>                                              
                                                                
int main(){                                                     
                                                                
int age;                                                        
                                                                
printf("Enter your age: ");                                     
scanf("%d", &age);                                              
                                                                
if(age>=18){                                                    
        printf("Congratulations! You are eligible to vote.\n"); 
}                                                               
else{                                                           
        printf("Sorry! You are not eligible for elections.\n"); 
}                                                               
                                                                
return 0;                                                       
}                                                               

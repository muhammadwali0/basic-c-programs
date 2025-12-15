#include <stdio.h>                                                    
                                                                      
int main(){                                                           
float celcius, fahrenheit;                                            
printf("Enter temprature (in Celcius): ");                            
scanf("%f", &celcius);                                                
fahrenheit=(celcius*9/5)+32;                                          
printf("Your given temprature is %.1f in Fahrneheit.\n", fahrenheit); 
return 0;                                                             
}                                                                     

/*Assignment No – 1
Write a C program to convert a temperature value from Fahrenheit to Celsius
*/

#include<stdio.h>
int main() {
            float F;
            float C;
            
               
            printf("\nProgram to Convert Fahrenheit to Celsius\n");
            printf("Enter the temperature in Fahrenheit\n");
            
            scanf("%f",& F);
            
            C=(F-32)*0.555555556;
             
            printf("%f\n",C);
            
            return 0;
            
            }

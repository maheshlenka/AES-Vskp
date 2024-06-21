#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    int num1, num2, max_div, flag = 1;  
   
    printf( " Enter any two positive numbers to get the LCM \n ");          //num1=3,num2=6
    scanf(" %d %d", &num1, &num2);  
      
     
    max_div = (num1 > num2) ? num1 : num2;                  //max_div=num2=6
      
    while (flag) // (flag = 1)  
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf( " The LCM of %d and %d is %d. ", num1, num2, max_div);  
            break;  
        }  
        ++max_div; 
    }  
}  
#include <stdio.h>
#include <math.h>

int main() {
    double X, Y;
    
    // Prompt user to enter the base number
    printf("Enter the base number:\n");
    scanf("%lf", &X);
    
    // Prompt user to enter the exponential number
    printf("Enter the exponential number:\n");
    scanf("%lf", &Y);
    
    // Calculate the result using pow function
    double result = pow(X, Y);
    
    // Display the result
    printf("Result = %lf\n", result);
    
    return 0;
}
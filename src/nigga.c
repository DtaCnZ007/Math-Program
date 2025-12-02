#include <stdio.h>
#include <math.h>

// Creating factorial function
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n*2; i++){
        fact=fact*i;
    }
    return fact;
}

// Main function
int main()
{
    int n,i,j,fact=1;
    float x,s=1,t=0;
    // Accepting user input
    printf("Enter the number of terms");
    scanf("%d", &n);
    printf("Enter the value of x:");
    scanf("%d", &x);

    // Computing the result
    for(i=1; i<=n; i++){
      t=(pow(-1,i)*pow(x,2*i))/factorial(n);
      s+=t;
    }

    // Printing the result to terminal
    printf("The sum of the series is:%d", s);
    return 0;
}
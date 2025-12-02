#include <stdio.h>
#include <math.h>
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n*2; i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,i,j,fact=1;
    float x,s=1,t=0;
    printf("Enter the number of terms");
    scanf("%d", &n);
    printf("Enter the value of x:");
    scanf("%d", &x);
    for(i=1; i<=n; i++){
      t=(pow(-1,i)*pow(x,2*i))/factorial(n);
      s+=t;
    }
    printf("The sum of the series is:%d", s);
    return 0;
}


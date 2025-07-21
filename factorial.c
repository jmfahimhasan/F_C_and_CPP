#include<stdio.h>
int main() {

int n,i;
unsigned long long factorial = 1;


printf("Enter the number:");
scanf("%d", &n);


if(n<0)
printf("factorial can not define negative numbers.");

else 


for(int i=1; i<=n; i++)
factorial *= i;
    printf("factorial of %d = %llu\n",n,factorial);


return 0;

}












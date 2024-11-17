#include <stdio.h>

int main(){

int marks[10];
int sum=0;

for(int i=0; i<10; i++)
{
    printf("enter the marks of student:");
    scanf("%d",&marks[i]);
}

for(int i=0; i<10; i++)
{
 sum+=marks[i];
}
printf("Sum of the marks:%d \n", sum);

    return 0;
}
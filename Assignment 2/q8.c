#include <stdio.h>

int main(){

int marks[10];

for(int i=0;i<10;i++)
{
    printf("Enter the marks of student:");
    scanf("%d", & marks[i]);
}
for(int i=0;i<10;i++)
{
    if(marks[i]<i-1)
    {
        printf("Student %d has scored the minimum marks",i+1);
    }
    else if(marks[i]>i-1)
    {
        printf("Student %d has scored the maximum marks",i+1);
    }
    
}
    return 0;
}
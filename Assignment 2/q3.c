#include <stdio.h>

int main()
{

    int marks[10];
    printf("Enter marks of 10 students = ");

    for(int i = 0; i<10;i++)
    {
    scanf("%d",&marks[i]);
    } 

        for(int i = 0; i<10;i++)
    {
        if(marks[i]==99)
        {
            printf("Student %d scored 99 marks \n",i+1);
            break;
        }
    }
return 0;
}
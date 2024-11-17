#include <stdio.h>

int main(){

    int marks[10];
 
    for(int i=0; i<10; i++)
    {
        printf("enter marks for student:");
        scanf("%d", & marks[i]);
    }
    printf("\n list of marks of students: \n");
    for(int i=0; i<10; i++)
    { 
        printf("%d \n", marks[i]+5); 
    }
    return 0;
}
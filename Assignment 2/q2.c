#include <stdio.h>

int main(){
    int marks[10];
 
    for(int i=0; i<10; i++)
    {
        printf("enter marks for student:");
        scanf("%d", & marks[i]);
    }
    int grade;

    for(int i = 0; i<10;i++)
    {

        if (marks[i] >= 75) {
            grade = 'A';
        } else if (marks[i] >= 60) {
            grade = 'B';
        } else if (marks[i] >= 40) {
            grade = 'C';
        } else {
            grade = 'D';
        }

        printf("The grade of the student %d is: %c\n",i+1, grade);
    }
return 0;
}
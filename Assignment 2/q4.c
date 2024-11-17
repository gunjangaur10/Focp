 #include <stdio.h>

int main(){
    int marks[10];
 
    for(int i=0; i<10; i++)
    {
        printf("enter marks for student %d is: %c\n",i+1);
        scanf("%d", & marks[i]);
    }
     for(int i = 1; i<10;i++)
    {
        if(marks[i]==99)
        { 
            printf("Student %d scored 99 marks \n",i+1);
        
        }
    }

    return 0;
}
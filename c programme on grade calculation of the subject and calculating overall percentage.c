#include<stdio.h>
int main()
{
    float marks,tot_percentage,tot_marks;
    char grade;
 
    printf("Enter marks of the subject & tot_marks:");
    scanf("%f\n%f",&marks,&tot_marks);
    
    if(marks >= 90)
    {
        grade = 'O';
        printf("your grade is '%c' \n (*Out Standing)",grade);
    }
    else if(marks >= 80 && marks < 90)
    {
        grade = 'A';
        printf("your grade is '%c' \n (*Excellent)",grade);
    }
    else if(marks >= 70 && marks < 80)
    {
        grade = 'B';
        printf("your grade is '%c' \n (*Very Good)",grade);
    }
    else if(marks >= 60 && marks < 70)
    {
        grade = 'C';
        printf("your grade is '%c' \n (*Good)",grade);
    }
    else if(marks >= 50 && marks < 60)
    {
      grade = 'D';
      printf("your grade is '%c' \n (*Fair)",grade);
    }
    else if(marks>=40 && marks < 50)
    {
        grade = 'E';
        printf("your grade is '%c' \n (*Satisfactory)",grade);
    }
    else 
    {
     grade = 'F';
     printf("your grade is '%c' \n(*FAIL) 'Better Luck Next Time'",grade);
    }
    tot_percentage=(tot_marks/600)*100;
    printf("\noverall percentage:%.2f",tot_percentage);
    return 0;
}

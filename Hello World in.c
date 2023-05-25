#include<stdio.h>

int main()
{

    char name[30];
    char course[30];
    char yearlevel[30];
    char subject[30];
    char subjectinstructor[30];
    
    printf("Please, enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your Name is ");
    puts(name);
    
    printf("Please, enter your course: ");
    fgets(course, sizeof(course), stdin);
    printf("Your Course is ");
    puts(course);  
    
    printf("Please, enter your year level: ");
    fgets(yearlevel, sizeof(yearlevel), stdin);
    printf("Your Year level is ");
    puts(yearlevel);   
    
    printf("Please, enter your subject: ");
    fgets(subject, sizeof(subject), stdin);
    printf("Your Subject is ");
    puts(subject);      
    
    printf("Please, enter your Subject Instructor Name: ");
    fgets(subjectinstructor, sizeof(subjectinstructor), stdin);
    printf("Your Subject instructor is ");
    puts(subjectinstructor);
    
    return 0;
}
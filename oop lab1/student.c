#include<stdio.h>
 struct Student{
    int roll;
    char name[50];
    int age;
    float cgpa;

 };

 int main(){
     struct Student s;

     printf("Enter roll no. :");
     scanf("%d",&s.roll);
     printf("Enter Student's name:");
     scanf("%s",s.name);
     printf("Enter student's age:");
     scanf("%d",&s.age);
     printf("Enter student's cgpa:");
     scanf("%f",&s.cgpa);

     printf("Student's details");
     printf("Student's Roll no.:%d\n", s.roll);
     printf("Student's Name:%s\n", s.name);
     printf("Student's age:%d\n", s.age);
     printf("Student's cgpa:%f\n", s.cgpa);


return 0;

 }

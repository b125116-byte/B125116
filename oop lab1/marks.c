#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int Marks_C;
    int Marks_Math;
    int Marks_Physics;
};

int main() {
    struct Student s;
    int total;
    float avg;

    printf("Enter Roll Name C Math Physics: ");
    scanf("%d %s %d %d %d",&s.roll,s.name,&s.Marks_C,&s.Marks_Math,&s.Marks_Physics);

    total=s.Marks_C+s.Marks_Math+s.Marks_Physics;
    avg=total/3.0;

    printf("Total = %d\n",total);
    printf("Average = %.2f\n",avg);

    return 0;
}
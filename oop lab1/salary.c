#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5];
    int max=0;

    for(int i=0;i<5;i++) {
        printf("Enter ID Name Salary: ");
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);

        if(e[i].salary > e[max].salary)
        max = i;
    }

    printf("\nHighest Salary Employee\n");
    printf("%d %s %.2f\n",e[max].id,e[max].name,e[max].salary);

    return 0;
}
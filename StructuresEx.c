#include <stdio.h>

struct Employee{
    int eNo;
    char eName[20];
    float eSal;
};

int main()
{
    printf("\n The Size of the Structure Employee is:%d",sizeof(struct Employee));
    //Static allocation
    struct Employee e1={3035,"Premkishan",100000};
    printf("\n The Name of Employee is:%s\nThe Employee Id is:%d\n The Salary is:%f",e1.eName,e1.eNo,e1.eSal);
    struct Employee e2;
    printf("\n Enter name of The Employee:");
    scanf("%s",&e2.eName);
    printf("\n Enter the Emp ID:");
    scanf("%d",&e2.eNo);
    printf("\n Enter the Salary:");
    scanf("%d",&e2.eSal);
     printf("\n The Name of Employee is:%s\nThe Employee Id is:%d\n The Salary is:%f",e2.eName,e2.eNo,e2.eSal);


}

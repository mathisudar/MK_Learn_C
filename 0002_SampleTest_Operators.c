#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Total: %d",c);

    return 0;
}



#include<stdio.h>
int main()
{
    float basicSalary,DA,HRA,grossSalary;
    printf("\n Enter your basic salary: ");
    scanf("%f",&basicSalary);
    DA = basicSalary*0.4;
    HRA = basicSalary*0.2;
    grossSalary = basicSalary+DA+HRA;

    printf("\n Basic Salary: %0.2f",basicSalary);
    printf("\n DA: %0.2f",DA);
    printf("\n HRA: %0.2f",HRA);
    printf("\n Gross Salary: %0.2f",grossSalary);


    return 0;

}

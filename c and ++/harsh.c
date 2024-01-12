#include<stdio.h>
struct details{
    char name[100];
    int salary;
};
void main()
{
struct details e[4];
char naam[100];
int a;
printf("enter name or anything and salary of the emp\n");
for(int i=0;i<4;i++)
{
scanf("%s %d", e[i].name, &e[i].salary);
}
printf("enter the name of e whose salary you want to know \n");
//gets(naam);
// scanf("%d",&a);
for(int i=0;i<4;i++)
{
    if(e[i].salary>5000){
        printf("emp no %d have salary greater than 5k ie %d\n",i,e[i].salary);
    }
}

}

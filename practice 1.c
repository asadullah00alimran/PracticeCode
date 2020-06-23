#include<stdio.h>
#include<string.h>
struct member
{
    char name[50];
    int id_no;
    float salary;

}M[3];

int members_data()
{
   int id_no;
   float salary;
   char name[50];

    gets(name[50]);
    scanf("%d",&id_no);
    scanf("%f",&salary);

    return 0;
}

int main()
{
    int data[3];

    printf("Enter the 1st members data: ");
    data[0] = members_data();

    printf("Enter the 2nd members data: ");
    data[1] = members_data();

    printf("Enter the 3rd members data: ");
    data[2] = members_data();

}


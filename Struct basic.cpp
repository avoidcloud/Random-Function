#include<stdio.h>
struct date
{
    int d,m,y;
};
struct data
{
    char name[80];
    long roll;
    float CGPA;
    struct date birth;
} ;///I; if we declare I here we don't need to declare in main function
int main()
{
    data I;
    printf("Input:\tName\n\tBirth Date\n\tRoll\n\tCGPA\n\n");
    scanf("%[^\n]s",I.name);
    scanf("%d %d %d",&I.birth.d,&I.birth.m,&I.birth.y);
    scanf("%d %f",&I.roll,&I.CGPA);
    printf("Name: %s\nDate of Birth: %d-%d-%d\nRoll: %d\nCGPA: %.2f",I.name,I.birth.d,I.birth.m,I.birth.y,I.roll,I.CGPA);
}

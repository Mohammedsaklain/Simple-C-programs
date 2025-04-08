/* Logs of student */
#include<stdio.h>
#include<string.h>
struct student
{
int roll;
char name[50];
int marks[6];
};
void main()
{
  struct student s[10];
  int i, n, sum, j;
  float avg;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the details of student %d\n",i+1);
    printf("Enter the roll number\n");
    scanf("%d",&s[i].roll);
    printf("Enter the Name\n");
    scanf("%s",s[i].name);
    printf("Enter the Marks of each 6 subject\n");
    for (j=0;j<6;j++)
      scanf("%d",&s[i].marks[j]);
  }
  for(i=0;i<n;i++)
  {
    sum=0, avg=0.0;
    for(j=0;j<6;j++)
      sum=sum+s[i].marks[j];
    avg=(float)sum/6;
    printf("Roll Number: %d, Name: %s, Avg Marks: %f \n", s[i].roll, s[i].name, avg);
    if(avg>=80 && avg<=100)
      printf("The grade is DISTINCTION\n");
    else if(avg>=60 && avg<=79)
      printf("The grade is FIRST CLASS\n");
    else if(avg>=40 && avg<=59)
      printf("The grade is SECOND CLASS\n");
    else
      printf("The grade is FAIL\n");
  }
}
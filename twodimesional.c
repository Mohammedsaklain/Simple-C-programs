// read,print,add and transpose of two matrices
#include<stdio.h>
void main()
{
 int a[10][10],b[10][10],
  c[10][10],i,j,m,n,p,q,row1,col1,row2,col2;
 printf("enter the first mat\n");
  printf("enter Row and Column size\n");
  scanf("%d%d",&row1,&col1);
  for(i=0;i<row1;i++)
    for(j=0;j<col1;j++)
      scanf("%d",&a[i][j]);
  printf("enter the 2nd mat\n");
   printf("enter Row and Column size\n");
   scanf("%d%d",&row2,&col2);
   for(m=0;m<row2;m++)
     for(n=0;n<col2;n++)
  scanf("%d",&b[m][n]);
  printf("the mat's are\n");
  
      for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
      }
    
       for(m=0;m<row2;m++)
       {
        for(n=0;n<col2;n++)
        {
        printf("%d\t",b[m][n]);
        }
        printf("\n");
       }
             for(p=0;p<row1;p++)
               {
                 for(q=0;q<col1;q++)
                {
                c[p][q]=a[p][q]+b[p][q];
                }
               }
                 for(p=0;p<row1;p++)
                   {
                     for(q=0;q<col1;q++)
                     {
                      printf("%d\t",c[p][q]);
                     }
                      printf("\n");
                   }
                      printf("the transpose of mat is\n");
                  
     for(i=0;i<row1;i++)
      {
        for(j=0;j<col1;j++)
        {
        printf("%d\t",a[j][i]);
        }
        printf("\n");
      }
         for(m=0;m<row2;m++)
           {
             for(n=0;n<col2;n++)
             {
              printf("%d\t",b[n][m]);
             }
             printf("\n");
           }
  }

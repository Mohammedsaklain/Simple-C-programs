/* Matrix multiplication*/

#include <stdio.h>
void read();
void multiply();
void display();
int a[10][10],b[10][10], c[10][10], m,n,p,q, i, j, k;
void main()
{
      printf("Enter rows and column for first matrix: ");
      scanf("%d %d", &m, &n);
      printf("Enter rows and column for second matrix: ");
      scanf("%d %d", &p, &q);
      if(n==p)
     {
	read();
	multiply();
	display();
    }
  else
  { 
     printf("Multiplication not possible");
 }	
}

void read()
{
      printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < m; i++)
	     for(j = 0; j < n; j++)
		scanf("%d", &a[i][j]);
           printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i <p; i++)
	   for(j = 0; j < q; j++)
	         scanf("%d", &b[i][j]);
		
  }







void multiply ()
{
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < q; j++)
		{
		     c[i][j] = 0;
		     for(k = 0; k <n;k++)
		     {
		        c[i][j] =c[i][j]+ a[i][k] * b[k][j];
		      }
	            }
             }
    }


void display()
{
	printf("\nOutput Matrix:\n");
	for(i = 0; i < m; i++)
            {
		for(j = 0; j < q; j++)
		{
			printf("%d\t",c[i][j]);			
		}
			printf("\n");	
             }

}

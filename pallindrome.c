// To find the string a Pallindrome or Not

#include<stdio.h>

void pallindrome(char a[], int size);

int main()
{
    char a[] = "1221";
    int size;
    size = sizeof(a) / sizeof(a[0]);
    pallindrome(a, size);
}

void pallindrome(char a[], int size)
{
    int S_Half=0,j=0,k,Cnt=0;
    if((size-1)%2 == 0)
    {
        S_Half = (size-1)/2;
        char Temp_S1[S_Half], Temp_S2[S_Half];
        for(int i=0;i<size;i++)
        {
            if(i<S_Half)
            {
                Temp_S1[i] = a[i];
            }
            if(i>=S_Half)
            {
                Temp_S2[j]= a[i];
                j+=1;
            }
        }
        k=S_Half-1;
        for(int i=0;i<S_Half;i++)
        {
            if(Temp_S1[i]==Temp_S2[k])
            {
                Cnt+=1;
            }
            k-=1;
        }
        if(Cnt==S_Half)
        {
            printf("%s is a pallindrome",a);
        }
        else
        {
            printf("%s is not a pallindrome",a);
        }
    }
    else
    {
        printf("%s is not a pallindrome",a);
    }
}
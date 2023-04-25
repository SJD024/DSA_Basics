// Move all the -ve elements to one side of the array

#include<stdio.h>

int main()
{
    int a[] = {-1,2,-3,-4,5,6,-7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    arrange(a,n);
    return 0;
}

void arrange(int a[],int n)
{
    int j=0,temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(j!=i)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
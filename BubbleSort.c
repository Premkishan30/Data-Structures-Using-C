#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter the Length of the array:");
    scanf("%d",&n);
    int a[n];
    int temp;
    printf("\n Enter the Array Elements:");

    for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

          printf("Before sorting the Elements are:\n");
        for(int i=0;i<n;i++)
            {
                printf("\t%d",a[i]);
            }


    //sorting of the array

    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                            //swap
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
        }

        printf("\nAfter sorting the Elements are:\n");
        for(int i=0;i<n;i++)
            {
                printf("\t%d",a[i]);
            }
}

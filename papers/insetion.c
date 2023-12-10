#include<stdio.h>

int main()
{
    int n = 5, j;
    int a[5] = {2, 4, 5, 3, 1};

    int temp;

    for(int i = 1; i < n; i++)
    {
        temp = a[i];

        j = i - 1;
        while(j >= 0 && a[j] < temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
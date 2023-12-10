#include<stdio.h>

int main()
{
    int a[5] = {4, 2, 5, 1, 3};

    int n = 5, temp;

    for( int gap = n / 2; gap >= 1; gap / 2)
    {
        for(int i = gap; i < n; i++)
        {
            for(int j = i - gap; j >= 0; j - gap)
            {
                if(a[j + gap] > a[j])
                {
                    break;
                }
                else
                {
                    temp = a[j + gap];
                    a[j + gap] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
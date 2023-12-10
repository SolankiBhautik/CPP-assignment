#include<stdio.h>

int marge(int a[], int lb, int ub);
int combine(int a[], int lb,int mid, int ub);

int main()
{
    int d[10] = {1, 5, 6 ,7, 8, 9, 10, 4, 2, 3};

    marge(d, 0, 9);

    printf("answer :");
    for ( int i = 0; i < 10; i++)
    {
        printf("%d \t", d[i]);
    }
    return 0;
}




int marge(int a[], int lb, int ub)
{
    if(lb < ub)
    {
        int mid = (lb + ub) / 2;
        marge(a, lb, mid);
        marge(a, mid + 1, ub);
        combine(a, lb, mid, ub);
    }

    return 0;
}

int combine(int a[], int lb,int mid, int ub)
{
    int i, j, k;
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int L[n1];
    int R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = a[lb + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = lb;

    while ( i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }

    return 0;
}
#include<stdio.h>

void margeshort(int d[], int l, int r);
void marge(int d[], int l, int mid, int r);

int main()
{
    int D[5] = {2, 3, 1, 5, 4};

    margeshort(D, 0, 4);

    printf("output: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t",D[i]);
    }

    return 0;
}

void margeshort(int d[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        margeshort(d, l, mid);
        margeshort(d, (mid + 1), r);
        marge(d, l, mid, r);
    }
    return;
}

void marge(int d[], int l, int mid, int r)
{
    int i, j, k;

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = d[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = d[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            d[k] = L[i];
            i++;
        }
        else
        {
            d[k] = R[j];
            j++;
        }
        k++;
    }


    for(i; i < n1; i++)
    {
        d[k] = L[i];
        k++;
    }

    for(j; j < n2; j++)
    {
        d[k] = R[j];
        k++;
    }

    return;

}
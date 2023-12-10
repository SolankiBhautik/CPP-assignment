#include <stdio.h>

int main()
{
    char data[5] = {'z', 'c', 'd', 'b', 'a'};
    int size = 5;
    int small = 0;
    int curnt = 0;
    char temp;

    for (int i = 0; i < size - 1; i++)
    {
        small = i;
        for(int j = i + 1; j < size; j++)
        {
            if (data[j] < data[small])
            {
                small = j;
            }
        }
        if (small != i)
        {
        temp = data[small];
        data[small] = data[i];
        data[i] = temp;
        }
    }

    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%c",data[i]);
    }

    return 0;
}
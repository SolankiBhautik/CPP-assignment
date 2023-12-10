#include <stdio.h>

int main()
{
    char data[5] = {'z', 'b', 'a', 'd', 'c'};

    printf("Before : %s \n", data);

    char temp;
    int pases;
    int size = 5;

    while (1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            pases = 0;
            if (data[i] > data[i + 1])
            {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                pases = 1;
            }
        }
        if (pases == 0)
        {
            break;
        }
    }
    printf("After  :");
    for (int i = 0; i < size; i++)
    {
        printf("%c", data[i]);
    }

    return 0;
}
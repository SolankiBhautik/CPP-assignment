#include <iostream>

using namespace std;

void printSeparator()
{
    cout << "------------------------------------------------\n";
}

int main()
{
    // Pattern 1
    cout << "Pattern 1:\n";
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << "\n";
    }
    printSeparator();

    // Pattern 2
    cout << "Pattern 2:\n";
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 4; j > i; --j)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k)
        {
            cout << "*";
        }
        cout << "\n";
    }
    printSeparator();

    // Pattern 3
    cout << "Pattern 3:\n";
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 4; j >= i; --j)
        {
            cout << "*";
        }
        cout << "\n";
    }
    printSeparator();

    // Pattern 4
    cout << "Pattern 4:\n";
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            cout << " ";
        }
        for (int k = 4; k >= i; --k)
        {
            cout << "*";
        }
        cout << "\n";
    }
    printSeparator();

    // Pattern 5
    cout << "Pattern 5:\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    printSeparator();

    // Pattern 5
    cout << "Pattern 5:\n";
    int n = 5;
    int c, k;
    for (k = 1; k <= n; k++)
    {
        for (c = 1; c <= n - k; c++)
            cout << "*";

        for (c = 1; c <= 2 * k - 1; c++)
            cout << " ";

        for (c= 1; c <= n - k; c++)
            cout<< "*";
        cout << endl;
    }

    for (k = 1; k <= n - 1; k++)
    {
        for (c = 1; c <= k; c++)
            cout << "*";

        for (c = 1; c <= 2 * (n - k) - 1; c++)
            cout << " ";

        for (c= 1; c <= k; c++)
            cout<< "*";

        cout << endl;
    }
    return 0;
}

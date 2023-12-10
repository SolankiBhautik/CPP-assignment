#include<iostream>

using namespace std;


int add (int a, int b = 10, int c = 100)
{
    return a + b + c;
}

int main()
{
    cout<<add(1, 2);

    return 0;
}
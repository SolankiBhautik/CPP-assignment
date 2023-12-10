#include<iostream>

using namespace std;

class exa{
    int a;

    public:
        exa(int A)
        {
            a = A;
        }
        exa operator+(const exa& obj)
        {
            exa b = a + obj.a;
            return b;
        }
        
        void display ()
        {
            cout<<a;
        }
};

int main()
{

    exa i(11);
    exa j(100);

    exa k = i + j;

    k.display();
}
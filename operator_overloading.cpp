#include<iostream>

using namespace std;

class exa 
{
    char a[10];
    public:
        exa(char e[10])
        {
            a = e;
        }

        exa operator<<(const exa& obj)
        {
            exa temp;
            temp.a = concat(a, obj.a);
            return temp;
        }

        void display()
        {
            printf("%s", a);
        }
};

int main()
{

    exa i["hi "];
    exa j["hello"];

    exa k = i << j;

    k.display();

    return 0;
}
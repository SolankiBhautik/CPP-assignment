#include<iostream>

using namespace std;

class data
{
    public:
    int n;
        data operator-() {
            data temp;
            temp.n = -n;
            return temp;
        }
};

int main()
{
    data o;
    o.n = 1;

    data p = -o;

    cout<<p.n;

    return 0;

}
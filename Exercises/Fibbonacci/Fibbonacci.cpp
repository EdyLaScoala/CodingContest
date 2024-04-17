#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long a=0, b=1, c=0;
    while(true)
    {
        cin >> n;
        a=0, b=1, c=0;
        while(n!=0)
        {
            a += b;
            b=c;
            c=a;
            n--; 
        }
        cout << a << endl;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=0, b=0, c=1;
    while(n!=0)
    {
        a += b;
        b=c;
        c=a;
        n--; 
    }
    cout << a << endl;
}

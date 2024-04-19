#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin("date.in");
  int n, c, var;
  fin >> n >> c;
  while(n!=0)
  {
    for(int i=0; i<c; i++)
    {
      fin >> var;
      if(var>i)
      {
        cout << i << endl;
        break;
      }
    }
    n--;
  }
}

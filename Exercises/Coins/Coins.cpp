#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin("date.in");
  ofstream fout("date.out");
  int n, c, var;
  bool found  = false;
  fin >> n >> c;
  while(n!=0)
  {
    for(int i=1; i<=c; i++)
    {
      fin >> var;
      if(i<var && !found)
      {
        fout << i << endl;
        found = true;
      }
    }
    found =  false;
    n--;
  }
}

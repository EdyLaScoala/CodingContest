#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin("date.in");
  ofstream fout("date.out");
  int n, c, v[2][100]={0}, val;
  bool found  = false;
  fin >> n >> c ;
  while(n!=0)
  {
    for(int i=0; i<c; i++)
    {
      fin >> v[0][i];
      cout << v[0][i] << " ";
    }
    cout << endl;
    for(int i=1; i<=100; i++)
    {
        val=0;
        while(val<i)
        {
            for(int j=c-1; j>=0; j--)
            {
                cout << val << " -- " << v[0][j] << endl;
                if(val+v[0][j]==i)
                {
                    val += v[0][j];
                    v[1][j]++;
                    break;
                }
                if(val + v[0][j]<i)
                {
                    val += v[0][j];
                    v[1][j]++;
                }
            }
        }
        //cout << val << endl;
        for(int j=0; j<c; j++)
        {
            if(v[1][j]!=0)
            {
                fout << i << ": " << v[1][j] << "x" << v[0][j] << "  ";
            }
            v[1][j] = 0;
        }
        fout << endl;
    }
    n--;
  }
}

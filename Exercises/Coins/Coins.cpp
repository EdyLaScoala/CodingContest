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
                if(val + v[0][j]<=i)
                {
                    val += v[0][j];
                    v[1][j]++;
                    break;
                }
            }
        }
        for(int j=c-1; j>=0; j--)
        {
            if(v[1][j]!=0)
            {
                fout << v[1][j] << "x" << v[0][j] << " ";
            }
            v[1][j] = 0;
        }
        fout << endl;
    }
    fout << endl;
    n--;
  }
  return 0;
}


/*
git config pull.rebase true

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
  }
  
}



==========
  
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


=============
  
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin("date.in");
  ofstream fout("date.out");
  int n, c, a, v[100], val;
  bool found  = false;
  fin >> n >> c >> a;
  while(n!=0)
  {
    for(int i=0; i<c; i++)
    {
      fin >> v[i];
    }
    for(int tmp=0; tmp<a; tmp++)
    {
        fin >> val;
        for(int i=0; i<c && !found; i++)
        {
            for(int j=i; j<c && !found; j++)
            {
                if(v[i] + v[j] == val)
                {
                    cout << v[i] << " " << v[j] << endl;
                    found = true;
                }
            }
        }
        found = false;
    }
    n--;
  }
}



============
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
                if(val + v[0][j]<=i)
                {
                    val += v[0][j];
                    v[1][j]++;
                    break;
                }
            }
        }
        //cout << val << endl;
        for(int j=c-1; j>=0; j--)
        {
            if(v[1][j]!=0)
            {
                fout << v[1][j] << "x" << v[0][j] << " ";
            }
            v[1][j] = 0;
        }
        fout << endl;
    }
    n--;
  }
}



10
3
1 2 16
1 8 10
1 5 8
1 2 19
1 12 14
1 5 16
1 9 14
1 15 16
1 13 17
1 3 13


*/
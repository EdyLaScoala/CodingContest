#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.in");

int main()
{
   int n;
   fin >> n;
   cout << n << endl;
   return 0;
}

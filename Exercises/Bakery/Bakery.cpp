#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream fin("date.in");
   int n;
   fin >> n;
   cout << n << endl;
   return 0;
}

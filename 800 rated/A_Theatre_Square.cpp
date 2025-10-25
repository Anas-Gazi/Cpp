#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long double n,m,a;
  long long x,y;
  cin >> n >> m >> a;
  x= ceil(n/a);
  y= ceil(m/a);
  cout << x*y << endl;
}

// ceil() will give next integer, like if x= 3.(1-9) it will give 4
// floor() will give current int and remove floating part, if x= 3.5 or 3.(1-9), it will give 3
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;   
    cin>> a>>b>>c;
    
   int x=a, y=b, z=c;

   if(a>b) swap(a,b);
   if(a>c) swap(a,c);
   if(b>c) swap(b,c);

   cout << a << endl << b << endl <<c; // this will prtint swap value
   cout << "\n\n";
   cout << x << endl << y << endl <<z; // this will print orginal value


       return 0;
}
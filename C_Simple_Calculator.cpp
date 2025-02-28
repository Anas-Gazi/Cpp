#include <iostream>
using namespace std;

int main()
{
    int X, Y, summation , subtraction ;
    long long int multiplication; 

    cin>> X >> Y;

    summation  = X + Y ;
    multiplication  = X * Y;
    subtraction  = X - Y;

    cout<< X <<" + "<< Y <<" = "<< summation  << endl;
    cout<< X <<" * "<< Y <<" = "<< multiplication  << endl;
    cout<< X <<" - "<< Y <<" = "<< subtraction  << endl;

       return 0;
}
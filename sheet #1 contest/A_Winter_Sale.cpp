#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x,p;
    cin>>x >>p;
    float a= p/(1- x/100);
    cout<< fixed <<setprecision(2) << a << endl;
    

       return 0;
}
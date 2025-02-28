#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double R, area;
    double pi  = 3.141592653;
    cin>>R;
    area = pi *R*R;
    cout << fixed << setprecision(9) << area;
       return 0;
}
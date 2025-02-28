#include <iostream>
using namespace std;

int main()
{
    long long int N,M,D;
    cin>>N >> M;

    D = (  N % 10 ) + ( M % 10 );
    cout<<D;

       return 0;
}
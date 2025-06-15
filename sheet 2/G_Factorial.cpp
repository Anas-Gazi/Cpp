#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


    for(int i=0 ; i<n; i++){
      int x;
      cin>> x;
      long long fact =1;
      for(int j=1; j<=x; ++j){
        fact *=j;
      }

          cout <<fact<<endl;
    }


       return 0;
}
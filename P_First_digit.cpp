#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>=10){
      n /= 10; // remove last digits until only 1st digit remain 
    }
    if(n%2 == 0){
      cout<< "EVEN";
    }else{
      cout << "ODD";
    }
    

       return 0;
}
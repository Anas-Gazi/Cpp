#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin>> A >> B;

    if(A % B == 0 || B % A == 0){ // here 
      cout<< "Multiples";
    }else{
      cout<< "No Multiples";
    }

       return 0;
}
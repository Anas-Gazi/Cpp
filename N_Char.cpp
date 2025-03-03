#include <iostream>
#include <cctype> // For toupper() and tolower()
using namespace std;

int main()
{
    char X;
    cin>>X;
    
    if(islower(X)){ // checks if the char is lowercase letter
      cout<< char(toupper(X));// lower upper to upper

    }else if(isupper(X)){//  checks if the char is uppercase letter
      cout<< char(tolower(X)); // convert upper to lower

    }
 

       return 0;
}
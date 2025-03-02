#include <iostream>
using namespace std;

int main()
{
    char X;
    cin>>X;
    
    if(X >= '0' && X<='9'){   // never forget to use '*' 
      cout<< "IS DIGIT";
    }else if(X >= 'A' && X<='Z'  || X >= 'a' && X <= 'z'){ // important
      cout << "ALPHA\n";
      if(X >= 'A' && X<='Z'){
        cout<< "IS CAPITAL";
     }else{
        cout<< "IS SMALL";
      }
    }

       return 0;
}

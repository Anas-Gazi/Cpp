#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;  // be careful s is is not int..!
    cin>> A >> S >> B;
    
    if(S == '+'){
      cout<< (A + B) << endl;
    }else if(S== '-'){
      cout<< (A - B) << endl;
    }else if(S== '*'){
      cout<< (A * B) << endl;
    }
    else if(S== '/'){
      cout<< (A / B) << endl;
    }

       return 0;
}
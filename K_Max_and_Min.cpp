#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>> A >> B >> C;
    
    int minimum = min(A, min(B, C)); // here min(B, C) will compare B & C & return the smallest value, then the result will compare with A and return overall smallest value
    int maximum = max(A, max(B, C)); // same same but different
    
    cout<< minimum << " " << maximum << endl;
       return 0;
}
// why not if-else? it maded some errors
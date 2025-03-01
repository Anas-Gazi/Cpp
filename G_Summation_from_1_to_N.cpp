#include <iostream>
using namespace std;

int main()
{
   long long int N;
   
   cin >> N;
  //  for (int i = 1; i <= N; i++)
  //  {
    // sum += i; //add each number from 1 to N
  //  } time limit executed on test case 4 :((

  long long int sum = N*(N+1LL)/2 ; // direct formula,
  // Used 1LL (LL = long long) to ensure safe 64-bit multiplication.
   cout << sum;

       return 0;
}
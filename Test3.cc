#include<iostream>
using namespace std;

int main()

{
  float y;
  float sum;
 
  for(float y = 1.0f; y <= 1000000.0f; y+= 1.0f)
    {
      sum = sum + 1/y;

    }
  cout << "Sum of series 1/1 + 1/2 + 1/3.....1/1000000.0f is : " << sum << '\n';
}

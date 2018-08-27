#include<iostream>
using namespace std;

int main()
{
  int counter=1,n=100,sum1,sum2;  //Initialising

  sum1 = n * (n + 1) / 2;         //Finding sum using Gauss Formula
  cout << "Sum of numbers from 1 to 100 using Gauss Formula is : " << sum1 << "\n";
  
  while(counter<=100)             //Finding sum using While loop
    {
    sum2 = sum2 + counter;
    counter++;
    }
  cout << "Sum of numbers from 1 to 100 using loop is : " << sum2 << "\n";

  if (sum1 == sum2)              //Check if results match
    cout << "Both the results match!!!";
  else
    cout << "Results dont match...";

}


  

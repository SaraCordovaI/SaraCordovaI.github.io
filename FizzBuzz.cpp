// This is a basic program on C++
//
// Try to modify and run it and check out
// the output in the terminal below.
//
// Happy coding! :-)

#include <iostream>
using namespace std;

int main() 
{
// '\n' serves me the purpse off going to the next line of output 
    for(int i = 1; i <= 100; ++i)// is a for loop that will irratate from 1 to 100
    {
      if((i % 5 == 0) && (i % 3 == 0))// If statement that checks if i is divisible by 3 and 5
      {
        cout << "FizzBuzz\n";// if true it will output "FizzBuzz"
      }
      else if(i % 5 == 0)// if false this If Statement will check if it is only divisible by 5 
      {
          cout << "Buzz\n";// if truew it will print "Buzz"
      }
      else if (i % 3 == 0)// if false again ... this If Statement will then check if it atleast divisible by 3
      {
        cout << "Fizz\n";// if true it will outpute "Fizz"
      }
      else // if false for the Third Time then the number is neither a multiple of 3 or 5
      {
        cout << i << "\n"; // which means to simple print out the number
      }

    }

    
}


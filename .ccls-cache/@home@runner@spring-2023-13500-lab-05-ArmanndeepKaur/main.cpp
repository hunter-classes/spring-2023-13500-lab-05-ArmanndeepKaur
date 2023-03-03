#include <iostream>
#include "funcs.h"

int main()
{
  //Task A
  std::cout<<isDivisibleBy(100, 25)<<"\n";
  std::cout<<isDivisibleBy(35, 17)<<"\n";

  //Task B 
  std::cout<<isPrime(7)<<"\n";
  std::cout<<isPrime(1)<<"\n";

  //Task C
  std::cout<<nextPrime(14)<<"\n";
  std::cout<<nextPrime(17)<<"\n";
  std::cout<<nextPrime(19)<<"\n";

  //Task D
  std::cout<<countPrimes(1,10)<<"\n"; 

  //Task E
  std::cout<<isTwinPrime(29)<<"\n";
  std::cout<<isTwinPrime(11)<<"\n";

  //Task F
  std::cout<<nextTwinPrime(14)<<"\n";
  std::cout<<nextTwinPrime(17)<<"\n";
  std::cout<<nextTwinPrime(19)<<"\n";

  //Task G
  std::cout<<largestTwinPrime(5, 18)<<"\n";
  std::cout<<largestTwinPrime(1, 31)<<"\n";
  std::cout<<largestTwinPrime(14, 16)<<"\n";

  return 0;
}

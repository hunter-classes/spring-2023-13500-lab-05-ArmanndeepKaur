#include <iostream>
#include "funcs.h"

// add functions here

//Task A 
bool isDivisibleBy(int n, int d)
{
  if(n % d == 0)
  {
    return true;
  }
  else
  {
    return false; 
  }
}

//Task B
bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }
  for(int i = 2; i <= n/2; i++)
  {
    if(n % i == 0)
    {
      return false; 
    }
  }
  return true; 
}

//Task C
int nextPrime(int n)
{
  int nextPrime = n; 
  bool found = false; 

  while(!found)
  {
    nextPrime++;    
    if (isPrime(nextPrime))
    {
      found = true; 
    }
  }
  return nextPrime; 
}

//Task D
int countPrimes(int a, int b)
{
  int countP = 0;
  for(int i = a; i <= b; i++)
	{
		if(isPrime(i)==true)
    {
      countP++;
    }
  }
  return countP;
}

//Task E
bool isTwinPrime(int n)
{
  if(isPrime(n) && (isPrime(n-2) || isPrime(n+2)))
  {
    return true;
  }
  return false;
}

//Task F 
int nextTwinPrime(int n)
{
  int num = n+1;
  while(!isTwinPrime(num))
  {
    num++;    
  }
  return num;
}

//Task G 
int largestTwinPrime(int a, int b)
{
  int largePrime = -1;
  for(int i = a; i <= b; i++)
  {
    if(isTwinPrime(i) == true)
    {
      largePrime = i; 
    }
  }
  return largePrime; 
}



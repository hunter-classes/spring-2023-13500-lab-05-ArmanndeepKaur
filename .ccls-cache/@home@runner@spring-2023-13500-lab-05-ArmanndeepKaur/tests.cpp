#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Task A 
TEST_CASE("isDivisibleBy")
{ 
	CHECK(isDivisibleBy(100,25) == true);
	CHECK(isDivisibleBy(35,17) == false);
}	

//Task B 
TEST_CASE("isPrime")
{
  CHECK(isPrime(5) == true);
	CHECK(isPrime(6) == false);
	CHECK(isPrime(7) == true);
}

//Task C
TEST_CASE("nextPrime")
{
	CHECK(nextPrime(14) == 17);
	CHECK(nextPrime(17) == 19);
}

//Task D
TEST_CASE("countPrimes")
{	
	CHECK(countPrimes(1, 10) == 4);
	CHECK(countPrimes(7, 12) == 2);
}

//Task E 
TEST_CASE("isTwinPrime")
{
	CHECK(isTwinPrime(17) == true);
	CHECK(isTwinPrime(18) == false);
}

//Task F
TEST_CASE("nextTwinPrime")
{
	CHECK(nextTwinPrime(14) == 17);
	CHECK(nextTwinPrime(17) == 19);
}

//Task G
TEST_CASE("largestTwinPrime")
{
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
}




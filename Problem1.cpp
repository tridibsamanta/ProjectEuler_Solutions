/**
 * Title   : Multiples of 3 and 5
 * Author  : Tridib Samanta
 * Created : 03-01-2020
 * Link    : https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
 **/

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


unsigned long long sum(unsigned long long x)
{
  return x * (x + 1) / 2;
}

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    std::cin >> last;
    last--;
    auto sumThree   =  3 * sum(last /  3);
    auto sumFive    =  5 * sum(last /  5);
    auto sumFifteen = 15 * sum(last / 15);
    std::cout << (sumThree + sumFive - sumFifteen) << std::endl;
  }
  return 0;
}

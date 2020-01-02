/**
 * Title   : Even Fibonacci numbers
 * Author  : Tridib Samanta
 * Created : 03-01-2020
 * Link    : https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
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

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last,sum = 0,a=1,b=2;
    std::cin >> last;
    while (b <= last)
    {
        if (b % 2 == 0)
            sum += b;
        auto next = a + b;
        a = b;
        b = next;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}

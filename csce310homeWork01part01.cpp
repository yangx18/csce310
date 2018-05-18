#include "csce310homeWork01part01.h"
#include <iostream>

using namespace std;

unsigned long long int oddDigits( unsigned long long int digits )
{
  int num = 0;
  while (digits != 0) {
   
	num = num + (digits % 2);
	digits = (digits / 10);
	
  }
  return num;
}

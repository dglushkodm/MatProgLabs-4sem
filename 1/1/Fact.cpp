#include "Fact.h"
#include <iostream>
using namespace std;

long double fact(int num)
{
	if (num == 1) return 1;
	return num * fact(num - 1);
}
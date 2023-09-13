#include <stdio.h>
#include "Test.h"


void __declspec(dllexport) Print()
{
	printf("Welcome to sEngine");
}
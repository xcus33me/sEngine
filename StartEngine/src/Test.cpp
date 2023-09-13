#include <stdio.h>
#include "Test.h"

namespace sEngine {

	__declspec(dllexport) void Print()
	{
		printf("Welcome to sEngine!");
	}

}

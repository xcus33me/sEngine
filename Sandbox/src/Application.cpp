#include <stdio.h>

namespace sEngine {
	__declspec(dllimport) void Print();
}

int main()
{
	sEngine::Print();
}
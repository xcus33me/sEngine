#include <SEngine.h>
#include <iostream>

class Sandbox : public SE::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

int main() {
	
	Sandbox* sandbox = new Sandbox();

	sandbox->Run();

	delete sandbox;
}
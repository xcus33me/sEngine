#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern SE::Application* SE::CreateApplication();

int main(int argc, char** argv)
{
	if (SE::Log::Init()) {
		SE_CORE_WARN("Logger initialized!");
	}
	else {
		SE_CORE_ERROR("Failed to initialize logger!");
		return -1;
	}
	
	SE_INFO("Hello!");
	SE_CRITICAL("Error!");


	auto app = SE::CreateApplication();
	app->Run();
	delete app;
}

#endif
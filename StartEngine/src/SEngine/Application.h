#pragma once

#include "Core.h"

#define SE_BUILD_DLL

namespace SE {

	class SE_API Application
	{
	public:

		Application();
		virtual ~Application();

		virtual void Run();

	};
}
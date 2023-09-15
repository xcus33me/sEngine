#pragma once

#ifdef  SE_PLATFORM_WINDOWS
	#ifdef SE_BUILD_DLL
		#define SE_API __declspec(dllexport)
	#else 
		#define SE_API __declspec(dllimport)
	#endif
#else
	#error "Start Engine only supports Windows for now!"

#endif // ! SENGINE_WINDOWS


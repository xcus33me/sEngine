#pragma once

#include <memory>

#include "Core.h"
#include <spdlog/spdlog.h>

namespace SE {

	class SE_API Log
	{
	public:

		static bool Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() {
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger> GetClientLogger() {
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

#define SE_CORE_WARN(...)		::SE::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define SE_CORE_INFO(...)		::SE::Log::GetCoreLogger()->info(__VA_ARGS__);
#define SE_CORE_ERROR(...)		::SE::Log::GetCoreLogger()->error(__VA_ARGS__);
#define SE_CORE_TRACE(...)		::SE::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define SE_CORE_CRITICAL(...)	::SE::Log::GetCoreLogger()->critical(__VA_ARGS__);

#define SE_WARN(...)			::SE::Log::GetClientLogger()->warn(__VA_ARGS__);
#define SE_INFO(...)			::SE::Log::GetClientLogger()->info(__VA_ARGS__);
#define SE_ERROR(...)			::SE::Log::GetClientLogger()->error(__VA_ARGS__);
#define SE_TRACE(...)			::SE::Log::GetClientLogger()->trace(__VA_ARGS__);
#define SE_CRITICAL(...)		::SE::Log::GetClientLogger()->critical(__VA_ARGS__);

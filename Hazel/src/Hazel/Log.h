#pragma once
#pragma warning(disable:4996)

#include <memory>
#include "Core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Hazel {

    class HAZEL_API Log
    {
    public:
        static void Init();
        static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
        static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
    };

}

#define HZ_CORE_ERROR(...)     GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_INFO(...)      GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)      GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_TRACE(...)     GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_FATAL(...)     GetCoreLogger()->fatal(__VA_ARGS__)

#define HZ_ERROR(...)     GetClientLogger()->error(__VA_ARGS__)
#define HZ_INFO(...)      GetClienLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)      GetClientLogger()->warn(__VA_ARGS__)
#define HZ_TRACE(...)     GetClientLogger()->trace(__VA_ARGS__)
#define HZ_FATAL(...)     GetClientLogger()->fatal(__VA_ARGS__)
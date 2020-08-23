#pragma once
#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazel {

    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%t] %n: %v%$");
        s_CoreLogger = spdlog::stdout_color_mt("core");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("client");
        s_ClientLogger->set_level(spdlog::level::trace);
    }

}
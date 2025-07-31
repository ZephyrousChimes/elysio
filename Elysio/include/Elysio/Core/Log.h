//
// Created by kronos on 7/27/25.
//

#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Elysio
{
class EL_API Log
{
   public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
    {
        return s_CoreLogger;
    }
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
    {
        return s_ClientLogger;
    }

   private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};
}  // namespace Elysio

// Core Log mappers
#define EL_CORE_TRACE(...) ::Elysio::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EL_CORE_INFO(...) ::Elysio::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EL_CORE_WARN(...) ::Elysio::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EL_CORE_ERROR(...) ::Elysio::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EL_CORE_FATAL(...) ::Elysio::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log mappers
#define EL_CLIENT_TRACE(...) ::Elysio::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EL_CLIENT_INFO(...) ::Elysio::Log::GetClientLogger()->info(__VA_ARGS__)
#define EL_CLIENT_WARN(...) ::Elysio::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EL_CLIENT_ERROR(...) ::Elysio::Log::GetClientLogger()->error(__VA_ARGS__)
#define EL_CLIENT_FATAL(...) ::Elysio::Log::GetClientLogger()->fatal(__VA_ARGS__)

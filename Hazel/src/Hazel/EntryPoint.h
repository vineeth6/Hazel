#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main()
{
    Hazel::Log::Init();
    Hazel::Log::GetCoreLogger()->warn("this is sample");
    Hazel::Log::GetClientLogger()->warn("this is sample");
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}
#endif

#pragma once

#include "Core.h"

namespace Hazel {
    class HAZEL_API Application
    {
    public:
        Application();
        ~Application();

        void Run();
    };
    //To be implemented by client
    Application* CreateApplication();
}


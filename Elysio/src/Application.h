//
// Created by kronos on 7/20/25.
//

#pragma once
#include "Core.h"


namespace Elysio {

    EL_API class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // Definition in CLIENT application
    Application* CreateApplication();

}

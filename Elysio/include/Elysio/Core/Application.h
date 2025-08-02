//
// Created by kronos on 7/20/25.
//

#pragma once

#include "Elysio/Core/ElysioPCH.h"

#include "Core.h"
#include "Elysio/Events/Event.h"

namespace Elysio
{

class EL_API Application
{
   public:
    Application();
    virtual ~Application();

    void Run();
};

// Definition in CLIENT application
Application* CreateApplication();

}  // namespace Elysio

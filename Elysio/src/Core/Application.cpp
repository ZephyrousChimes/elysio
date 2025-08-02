//
// Created by kronos on 7/20/25.
//

#include "Elysio/Core/Application.h"
#include "Elysio/Core/ElysioPCH.h"

#include "Elysio/Core/Log.h"
#include "Elysio/Events/ApplicationEvent.h"

namespace Elysio
{
Application::Application() {}

Application::~Application() {}

void Application::Run()
{
    printf("Welcome to Elysio!\n");
    const WindowResizeEvent e(1200, 800);
    // EL_TRACE(e.ToString());
    while (true)
        ;
}
}  // namespace Elysio

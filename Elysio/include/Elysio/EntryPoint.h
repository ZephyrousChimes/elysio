//
// Created by kronos on 7/20/25.
//

#ifdef EL_PLATFORM_WINDOWS
#error
#elif defined(EL_PLATFORM_LINUX)

extern Elysio::Application* Elysio::CreateApplication();

int main(int argc, char** argv)
{
    Elysio::Log::Init();
    EL_CORE_INFO("Initialized Logger");

    auto app = Elysio::CreateApplication();
    app->Run();
    delete app;
}
#endif

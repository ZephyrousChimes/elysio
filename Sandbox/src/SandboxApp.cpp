#include <Elysio/Elysio.h>
#include <cstdio>

class Sandbox : public Elysio::Application
{
   public:
    Sandbox() {}

    ~Sandbox() {}
};

Elysio::Application* Elysio::CreateApplication()
{
    return new Sandbox();
}

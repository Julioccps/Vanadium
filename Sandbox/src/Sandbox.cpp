#include <Vanadium.h>
class Sandbox : public Vanadium::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Vanadium::Application* Vanadium::CreateApplication()
{
	return new Sandbox();
}
#pragma once

#ifdef VN_PLATFORM_WINDOWS

extern Vanadium::Application* Vanadium::CreateApplication();

int main(int argc, char** argv) {

	auto app = Vanadium::CreateApplication();
	app->Run();
	delete app;
}

#endif
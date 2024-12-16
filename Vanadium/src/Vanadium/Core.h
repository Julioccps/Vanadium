#pragma once

#ifdef VN_PLATFORM_WINDOWS
	#ifdef VN_BUILD_DLL
		#define VANADIUM_API __declspec(dllexport)	
	#else
		#define VANADIUM_API __declspec(dllimport)
	#endif
#else
	#error Vanadium only supports Windows!
#endif


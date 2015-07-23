// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SAYLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SAYLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SAYLIBRARY_EXPORTS
#define SAYLIBRARY_API __declspec(dllexport)
#else
#define SAYLIBRARY_API __declspec(dllimport)
#endif

struct SayResult {
	bool success;
	char* message;
};


SAYLIBRARY_API SayResult say(const wchar_t *language, const wchar_t *text);

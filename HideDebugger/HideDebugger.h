// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the HIDEDEBUGGER_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// HIDEDEBUGGER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HIDEDEBUGGER_EXPORTS
#define HIDEDEBUGGER_API __declspec(dllexport)
#else
#define HIDEDEBUGGER_API __declspec(dllimport)
#endif

HIDEDEBUGGER_API int dummyExport() { return 42; }
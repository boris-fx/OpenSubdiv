#ifndef OPENSUBDIV3_EXPORTS_H
#define OPENSUBDIV3_EXPORTS_H
 
#if (defined _MSC_VER && defined _DLL)
#if (defined OPENSUBDIV_DLL_EXPORT)
    #define OPENSUBDIV_API __declspec(dllexport)
#else
    #define OPENSUBDIV_API __declspec(dllimport)
#endif
#else
    #define OPENSUBDIV_API
#endif

#endif
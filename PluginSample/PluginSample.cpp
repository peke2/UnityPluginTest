// PluginSample.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//
#include "stdafx.h"

//#define EXPORTING_DLL
//#include "PluginSample.h"


#define DLL_EXPORT __declspec(dllexport)

/*
BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	return TRUE;
}
*/

//	C関数名を装飾しないため「extern "C"」を追加
//	C#から参照する際に名前が見つからなくなることを防ぐため？
extern "C" DLL_EXPORT unsigned char *GetToken()
{
	static unsigned char token[] = {0,1,2,3,4,5,6,7,8,9,10,15,12,13,14,11};
	return token;
}


extern "C" DLL_EXPORT const char *Say()
{
	return "DLL import succeeded!";
}



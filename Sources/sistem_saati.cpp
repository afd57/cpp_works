#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
void clear_screen()
{
	HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hndl, &csbi);
	DWORD written;
	DWORD n = csbi.dwSize.X * csbi.dwCursorPosition.Y + csbi.dwCursorPosition.X + 1;	
	COORD curhome = {0,0};
	FillConsoleOutputCharacter(hndl, ' ', n, curhome, &written);
	csbi.srWindow.Bottom -= csbi.srWindow.Top;
	csbi.srWindow.Top = 0;
	SetConsoleWindowInfo(hndl, TRUE, &csbi.srWindow);
	SetConsoleCursorPosition(hndl, curhome);
}

int main()
{
	time_t lt;
"	lt=time(NULL);
	int i=0,saat,dakika,saniye;
	struct tm* local=localtime(&lt);
		saat=local->tm_hour;
		dakika=local->tm_min;
		saniye=local->tm_sec;
		//clear_screen();
	do
	{
		saniye++;
		if(saniye==59)
		{
			dakika++;
            saniye=00;
		}
        if(dakika == 59 && saniye==0)
        {
            saat++;
            dakika=00;
        }
		cout<<saat<<":"<<dakika<<":"<<saniye;
		Sleep(1000*1);
		clear_screen();
	}
	while(i=1);
}
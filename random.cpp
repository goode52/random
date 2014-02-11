#include <stdio.h>      // printf, scanf, puts, NULL //
#include <stdlib.h>     // srand, rand //
#include <time.h>       // time //
#include <iostream>		// cin //
#include <windows.h>	// clearscreen, sleep //
#include <string>		// string //


using namespace std;





void ClearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
		)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
		)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}

int Random1()
{
	int numRand;

	/* generate number between 1 and 20: */
	numRand = rand() % 20 + 1;
	return numRand;
}


int Random2()
{
	int numRand;

	/* generate number between 1 and 20: */
	numRand = rand() % 20 + 1;
	return numRand;
}


int Random3()
{
	int numRand;

	/* generate number between 1 and 20: */
	numRand = rand() % 20 + 1;
	return numRand;
}


int Random4()
{
	int numRand;

	/* generate number between 1 and 20: */
	numRand = rand() % 20 + 1;
	return numRand;
}

int main()
{
	/* initialize random seed: */
	srand(time(NULL));
	
	cout << Random1() ;
	Sleep(2000);
	ClearScreen();

	cout << Random2() ;
	Sleep(2000);
	ClearScreen();

	cout << Random3()  ;
	Sleep(2000);
	ClearScreen();

	cout << Random4()  ;
	Sleep(2000);
	ClearScreen();


	cin.get();





}





// SDLStart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SDL.h>
#include "Screen.h"

using namespace std;
using namespace MY;

int main(int argc, char ** argv)
{
	std::cout << "Hello World!\n";

	Screen screen;

	if (!screen.Init())
	{
		cout << "Error initialising SDL." << "\n";
	}
	
	// Game loop
	while (true)
	{
		// Update particles
		//Draw particles
		//Check for messages/events

		for (unsigned int y = 0; y < screen.SCREEN_WIDTH; y++)
		{
			for (unsigned int x = 0; x < screen.SCREEN_HEIGHT; x++)
			{
				if (x % 2 == 0 || y % 2 == 0)
				{
					screen.SetPixel(x, y, 0, 128, 0);
				}
				
			}
		}

		//screen.SetPixel(400, 300, 255, 0, 0);

		screen.Update();

		if (screen.ProcessEvents() == false)
		{
			break;
		}

	}

	//cin.get();

	screen.Close();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

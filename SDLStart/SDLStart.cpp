// SDLStart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"



using namespace std;
using namespace MY;

int main(int argc, char ** argv)
{
	srand(time(nullptr));

	Screen screen;

	if (!screen.Init())
	{
		cout << "Error initialising SDL." << "\n";
	}
	
	Swarm swarm;

	const int halfWidth = Screen::SCREEN_WIDTH / 2;
	const int halfHeight = Screen::SCREEN_HEIGHT / 2;

	// Game loop
	while (true)
	{
		// Update particles
		//Draw particles
		//Check for messages/events

		Uint32 elapsedTime = SDL_GetTicks();
		screen.Clear();
		swarm.Update();

		unsigned char green = (unsigned char)((1 + SDL_sin(elapsedTime * 0.0001)) * 128); // Make the number of range between 0-255
		unsigned char red = (unsigned char)((1 + SDL_sin(elapsedTime * 0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + SDL_sin(elapsedTime * 0.0003)) * 128);

		const Particle* const pParticles = swarm.GetParticles();
		for (size_t i = 0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticles[i];

			float x = (particle.xPos + 1) * halfWidth; // Set the position range to screen width
			float y = ((particle.yPos) * halfWidth) + halfHeight; // Set the position true aspect ratio.
			
			

			screen.SetPixel(x, y, red, green, blue);
		}			

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

#define _USE_MATH_DEFINES

#include "Particle.h"
#include <cmath>
#include <stdlib.h>


namespace MY{

Particle::Particle(): xPos(0), yPos(0)
{
	/*xPos =  ((2.0f * rand()) / RAND_MAX) - 1; // (float)rand() / RAND_MAX; Sets the range to 0-1 --- ((2.0f * rand()) / RAND_MAX) - 1 Sets the range to -1 and 1
	yPos = ((2.0f * rand()) / RAND_MAX) - 1;*/

	direction = (2.0f * M_PI * rand()) / RAND_MAX;	
	speed = (0.04f * rand()) / RAND_MAX;	

	speed *= speed;
}


Particle::~Particle()
{
}

void Particle::Init()
{
	xPos = 0;
	yPos = 0;

	direction = (2.0f * M_PI * rand()) / RAND_MAX;
	speed = (0.04f * rand()) / RAND_MAX;

	speed *= speed;
}

void Particle::Update(int time)
{
	direction += time * 0.0003f;

	float xSpeed = speed * cos(direction);
	float ySpeed = speed * sin(direction);	
	
	xPos += xSpeed * time;
	yPos += ySpeed * time;

	if (xPos < -1 || xPos > 1 || yPos < -1 || yPos > 1)
	{
		Init();
	}

	if (rand() < RAND_MAX/100)
	{
		Init();
	}

}

} // namespace
#define _USE_MATH_DEFINES

#include "Particle.h"
#include <cmath>
#include <stdlib.h>


namespace MY{

Particle::Particle(): xPos(0), yPos(0)
{
	/*xPos =  ((2.0f * rand()) / RAND_MAX) - 1; // (float)rand() / RAND_MAX; Sets the range to 0-1 --- ((2.0f * rand()) / RAND_MAX) - 1 Sets the range to -1 and 1
	yPos = ((2.0f * rand()) / RAND_MAX) - 1;*/

	direction = (2 * M_PI * rand()) / RAND_MAX;	
	speed = (0.001 * rand()) / RAND_MAX;
}


Particle::~Particle()
{
}

void Particle::Update()
{
	float xSpeed = speed * cos(direction);
	float ySpeed = speed * sin(direction);

	xPos += xSpeed;
	yPos += ySpeed;

}

} // namespace
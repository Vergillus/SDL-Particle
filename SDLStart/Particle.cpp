#include "Particle.h"
#include <stdlib.h>

namespace MY{

Particle::Particle()
{
	xPos =  ((2.0f * rand()) / RAND_MAX) - 1; // (float)rand() / RAND_MAX; Sets the range to 0-1 --- ((2.0f * rand()) / RAND_MAX) - 1 Sets the range to -1 and 1
	yPos = ((2.0f * rand()) / RAND_MAX) - 1;

}


Particle::~Particle()
{
}

}
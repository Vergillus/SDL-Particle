#include "Swarm.h"

namespace MY{

Swarm::Swarm()
{
	pParticles = new Particle[NPARTICLES];
}


Swarm::~Swarm()
{
	delete[] pParticles;
}



} // namespace

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

void Swarm::Update()
{
	for (unsigned int i = 0; i < NPARTICLES; i++)
	{
		pParticles[i].Update();
	}
}



} // namespace

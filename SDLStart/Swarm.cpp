#include "Swarm.h"

namespace MY{

Swarm::Swarm() : lastTime(0)
{
	pParticles = new Particle[NPARTICLES];
}


Swarm::~Swarm()
{
	delete[] pParticles;
}

void Swarm::Update(int time)
{
	int interval = time - lastTime;

	for (unsigned int i = 0; i < NPARTICLES; i++)
	{
		pParticles[i].Update(interval);
	}

	lastTime = time;
}



} // namespace

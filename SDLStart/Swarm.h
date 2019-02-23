#pragma once

#include "Particle.h"

namespace MY{

class Swarm
{
private:
	Particle* pParticles;

public:
	const static int NPARTICLES = 5000;

public:
	Swarm();
	~Swarm();

	inline const Particle* const GetParticles() { return pParticles; };
};

}

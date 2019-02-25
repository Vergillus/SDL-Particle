#pragma once

namespace MY{

struct Particle
{
	float xPos;
	float yPos;

	float speed;
	float direction;

public:
	Particle();
	~Particle();
	void Update(int time);
};


}

#pragma once

namespace MY{

struct Particle
{
	float xPos;
	float yPos;

private:
	float speed;
	float direction;

private:
	void Init();

public:
	Particle();
	~Particle();
	void Update(int time);
};


}

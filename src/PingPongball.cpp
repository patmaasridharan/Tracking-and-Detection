#include "PingPongball.h"



PingPongball :: PingPongball()
{
	//set values for default constructor
	setType("");
	setColour(Scalar(0,0,0));

}


PingPongball ::~PingPongball(void) {
}

int PingPongball::getXPos()
{

	return PingPongball::xPos;

}

void PingPongball::setXPos(int x)
{

	PingPongball::xPos = x;

}

int PingPongball::getYPos()
{

	return PingPongball::yPos;

}

void PingPongball::setYPos(int y)
{

	PingPongball::yPos = y;

}

Scalar PingPongball::getHSVmin()
{

	return PingPongball::HSVmin;

}
Scalar PingPongball::getHSVmax()
{

	return PingPongball::HSVmax;
}

void PingPongball::setHSVmin(Scalar min)
{

	PingPongball::HSVmin = min;
}


void PingPongball::setHSVmax(Scalar max)
{

	PingPongball::HSVmax = max;
}
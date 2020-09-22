#include "fruit.h"

Fruit::Fruit()
{
	//set values for default constructor
	setType("Point");
	setColour(Scalar(0,0,0));

}

Fruit::Fruit(string name){

	setType(name);
	
	if(name=="apple"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Green:
		setColour(Scalar(0,255,0));

	}
	if(name=="banana"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Yellow:
		setColour(Scalar(0,255,255));

	}
	if(name=="cherry"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,0,0));
		setHSVmax(Scalar(255,255,255));

		//BGR value for Red:
		setColour(Scalar(0,0,255));

	}

}

Fruit::~Fruit(void)
{
}

int Fruit::getXPos(){

	return Fruit::xPos;

}

void Fruit::setXPos(int x){

	Fruit::xPos = x;

}

int Fruit::getYPos(){

	return Fruit::yPos;

}

void Fruit::setYPos(int y){

	Fruit::yPos = y;

}

Scalar Fruit::getHSVmin(){

	return Fruit::HSVmin;

}
Scalar Fruit::getHSVmax(){

	return Fruit::HSVmax;
}

void Fruit::setHSVmin(Scalar min){

	Fruit::HSVmin = min;
}


void Fruit::setHSVmax(Scalar max){

	Fruit::HSVmax = max;
}

uint32_t range(uint32_t point){
	if (point >= 0 && point <= 63){
		return RANGE_L5;
	}

	else if (point >= 64 && point <= 127){
		return RANGE_L4;
	}

	else if (point >= 128 && point <= 191){
		return RANGE_L3;
	}

	else if (point >= 192 && point <= 255){
		return RANGE_L2;
	}

	else if (point >= 256 && point <= 320){
		return RANGE_L1;
	}

	else if (point >= 321 && point <= 320){
		return RANGE_R1;
	}

	else if (point >= 386 && point <= 450){
		return RANGE_R2;
	}

	else if (point >= 451 && point <= 515){
		return RANGE_R3;
	}

	else if (point >= 516 && point <= 580){
		return RANGE_R4;
	}

	else if (point >= 581 && point <= 640){
		return RANGE_R5;
	}

	else {
		return MID;
	}
}

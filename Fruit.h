#pragma once
#include <string>
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio.hpp"
using namespace std;
using namespace cv;

#define RANGE_L5	-5;
#define RANGE_L4	-4;
#define RANGE_L3	-3;
#define RANGE_L2	-2;
#define RANGE_L1	-1;
#define MID			0;
#define RANGE_R1	1;
#define RANGE_R2	2;
#define RANGE_R3	3;
#define RANGE_R4	4;
#define RANGE_R5	5;

class Fruit
{
public:
	Fruit();
	~Fruit(void);

	Fruit(string name);

	int getXPos();
	void setXPos(int x);

	int getYPos();
	void setYPos(int y);

	Scalar getHSVmin();
	Scalar getHSVmax();

	void setHSVmin(Scalar min);
	void setHSVmax(Scalar max);

	string getType(){return type;}
	void setType(string t){type = t;}

	Scalar getColour(){
		return Colour;
	}
	void setColour(Scalar c){

		Colour = c;
	}

private:

	int xPos, yPos;
	string type;
	Scalar HSVmin, HSVmax;
	Scalar Colour;
};

uint32_t range(uint32_t point);

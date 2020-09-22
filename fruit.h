#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio.hpp"
using namespace std;
using namespace cv;

using namespace std;

/*
 * Define Range:
 * ===/===/===/===/===/===/===/===/===/===/===/
 *	1	2	3	4	5	0	6	7	8	9	10
 * ===/===/===/===/===/===/===/===/===/===/===/
*/

#define RANGE_L5	1;
#define RANGE_L4	2;
#define RANGE_L3	3;
#define RANGE_L2	4;
#define RANGE_L1	5;
#define MID			0;
#define RANGE_R1	6;
#define RANGE_R2	7;
#define RANGE_R3	8;
#define RANGE_R4	9;
#define RANGE_R5	10;

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

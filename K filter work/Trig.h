/*
==============================================================
 Trig Library
==============================================================
 Original Code (C) 2012-2013 Oscar Liang
 Ported September 2014 with permission from original author
 Licensed under the MIT licence.
 
 This is a library to quickly do common trigonometry functions
 on Arduinos/other microprocessors.
 
 This is the main header file.
==============================================================
*/

//Include Guard:
#ifndef Trig_h
#define Trig_h

//Arduino libraries:
//#include "Arduino.h"
//#include <bitset>
#include <cmath>
using namespace std;

class Trig {
  public:
		Trig();
		int radToMicro(float rad);
		int floatToInt(float input);
		int sin(int deg);
		int cos(int deg);
		float acos(float num);
		float atan2(float opp, float adj);
		int atan2(int opp, int adj);
		int radToDeg(float rad);
	private:
		int floatToBitShiftInt(float num);
		float BitShiftIntToFloat(int num);
};

extern Trig trig;
#endif 

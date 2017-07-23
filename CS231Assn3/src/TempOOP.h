#ifndef TEMP_CONV_H
#define TEMP_CONV_H
#include <stddef.h>

class Thermometer{
	int temp;
	char scale;
	public:
		void setTemp(int);
		void setScale(char);
		void resetThermometer();
		int getTemp();
		char getScale();
		Thermometer();
		Thermometer(int, char);
		Thermometer(const Thermometer &copy);

};

#endif

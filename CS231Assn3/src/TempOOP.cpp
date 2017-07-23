/*
 * TempOOP.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */
#include "TempOOP.h"

Thermometer::Thermometer(){
	scale = 'c';
	temp = 0;
}

Thermometer::Thermometer(const Thermometer &copy){
	scale = copy.scale;
	temp = copy.temp;
}

Thermometer::Thermometer(int tempr, char type){
	scale = type;
	temp = tempr;
}


void Thermometer::setTemp(int intemp){
	temp = intemp;
}

void Thermometer::setScale(char inscale){
	scale = inscale;
}

void Thermometer::resetThermometer(){
	if(scale == 'c'){
		temp = 0;
	}else{
		temp=32;
	}
}

int Thermometer::getTemp(){
	return temp;
}

char Thermometer::getScale(){
	return scale;
}

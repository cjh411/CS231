/*
 * TempOOP_Main.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */


#include "TempOOP.h"
#include <iostream>
using namespace std;

int main(){
	Thermometer Thrmomtr = Thermometer();
	cout << Thrmomtr.getScale()<<"\n";
	cout << Thrmomtr.getTemp()<<"\n";
	Thrmomtr.setTemp(40);
	cout << Thrmomtr.getTemp()<<"\n";

	Thermometer copytherm = Thrmomtr;
	cout << copytherm.getTemp()<<"\n";

	return 0;

}

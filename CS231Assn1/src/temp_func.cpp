/*
 * temp_conv_func.cpp
 *
 *  Created on: Jul 11, 2017
 *      Author: christopherhedenberg
 */

#include "temp_func.h"


float convert(float temp,char type){
	if (type=='f'){
		return (temp-32.0)*(5.0/9.0);
	}
	else if(type=='c'){
		return (temp*(9.0/5.0))+32.0;
	}
	else{
		return 0;
	}
}



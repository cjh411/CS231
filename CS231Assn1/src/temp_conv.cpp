/*
 * temp_conv.cpp
 *
 *  Created on: Jul 11, 2017
 *      Author: christopherhedenberg
 */

#include <iostream>
#include "temp_func.h"
using namespace std;

int main(){
	char temptype;
	float temp;
	cout<<"Input temperature\n";
	cin>>temp;
	cout<<"(f)arenheight or (c)elcius?\n";
	cin>>temptype;
	cout<<convert(temp,temptype);
	return 0;
}




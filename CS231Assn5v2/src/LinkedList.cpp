/*
 * LinkedList.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */



#include <iostream>
#include "List.h"
using namespace std;

int main(){

	list IntList = list();
	int inputVal;
	char inputChar;
	for(int i = 0; i<10; i++){
			IntList.addItem(i);
	}
	for(int i = 65; i<75; i++){
			IntList.addItem((char)i);
	}

	IntList.printList();
	return 0;

}

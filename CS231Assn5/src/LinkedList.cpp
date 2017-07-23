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
	cout <<"Input ten items for list";
	int inputVal;
	for(int i = 0; i<10; i++){
		cin>> inputVal;
		IntList.addItem(inputVal);
	}

	IntList.printList();
	return 0;

}

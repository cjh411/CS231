/*
 * List.h
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#ifndef LIST_H_
#define LIST_H_
#include <stddef.h>
#include <iostream>
#include "Node.h"

class list{
	public:
		int size;
		node* head;
		list();
		list(int);
		void addItem(int value);
		void addItem(char value);
		void printList();

};


#endif /* LIST_H_ */

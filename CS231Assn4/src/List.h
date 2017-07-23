/*
 * List.h
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#ifndef LIST_H_
#define LIST_H_
#include <stddef.h>
#include "Node.h"

class list{
	public:
		int size;
		node* head;
		list();
		list(int);
		void addItem(int value);
		int getLargestValue();
};


#endif /* LIST_H_ */

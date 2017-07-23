/*
 * Node.h
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#ifndef NODE_H_
#define NODE_H_
#include <stddef.h>

class node{
	public:
		int value;
		node* next;
		node(int,node*);
		node(int);
		node();
		int getValue();
};


#endif /* NODE_H_ */

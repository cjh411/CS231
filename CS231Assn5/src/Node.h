/*
 * Node.h
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */

#ifndef NODE_H_
#define NODE_H_
#include <stddef.h>
#include <iostream>

class node{
	public:
		node* next;
		node();
		virtual void getValue() = 0;


};

class intNode: public node{
	public:
		int value;
		intNode(int);
		intNode();
		virtual void getValue();

};

//class charNode: public node{
//	public:
//		char value;
//		charNode(char,node*);
//		charNode(char);
//		charNode();
//		char getValue();
//};

#endif /* NODE_H_ */

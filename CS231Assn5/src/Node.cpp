/*
 * Node.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */


#include "Node.h"


node::node(){
	next = NULL;
}


intNode::intNode(int val):node(){
	value = val;
}

intNode::intNode():node(){
	value = NULL;
}


void intNode::getValue(){
	std::cout<<value;
}

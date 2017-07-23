/*
 * Node.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */


#include "Node.h"

node::node(int val){
	value=val;
	next = NULL;

}

node::node(){
	value=NULL;
	next = NULL;
}

node::node(int val,node* nextnode){
	value=val;
	next = nextnode;

}

int node::getValue(){
	return value;
}

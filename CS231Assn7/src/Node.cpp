/*
 * Node.cpp
 *
 *  Created on: Jul 15, 2017
 *      Author: christopherhedenberg
 */


#include "Node.h"


//node::node(){
//	next = NULL;
//}

//template <class type>
//nodetemp<type>::nodetemp(type val):node(){
//	value = val;
//}
//
//template <class type>
//nodetemp<type>::nodetemp():node(){
//	value = NULL;
//}
//
//template <class type>
//void nodetemp<type>::getValue(){
//	std::cout<<value;
//}

template <class type>
nodetemp<type>::nodetemp(type val){
	value = val;
	next = NULL;
}

template <class type>
nodetemp<type>::nodetemp(){
	value = NULL;
	next = NULL;
}

template <class type>
void nodetemp<type>::getValue(){
	std::cout<<value;
}

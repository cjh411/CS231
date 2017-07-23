/*
 * caeser_main.cpp
 *
 *  Created on: Jul 12, 2017
 *      Author: christopherhedenberg
 */

#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream
#include <ctype.h>
using namespace std;

int main(){
	ifstream textInput ("/Users/christopherhedenberg/Downloads/courses/MITC++/CS231Assn2/InputText.txt");
	int CharCnt[26] = {0};
	char InputChar;
	if (textInput.is_open()){
		while (!textInput.eof ()){
			textInput>>InputChar;
			if (isalpha(InputChar)){
				CharCnt[tolower(InputChar)-97]+=1;
			}
		}
	}
	textInput.close();


	for (int i = 0; i < 26; i++){
		cout<<(char)(i+97)<<": "<<CharCnt[i]<<"\n";
	}
	return 0;

}



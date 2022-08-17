//============================================================================
// Name        : 111.cpp
// Author      : joe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int cnt = 0;

void cntWays(int x, int y, int xPos = 0, int yPos = 0){
	if(xPos < x){
		cout << "(" << xPos << ", " << yPos << ")" << endl;
		cntWays(x, y, xPos + 1, yPos);
	}
	if(yPos < y){
		cout << "(" << xPos << ", " << yPos << ")" << endl;
		cntWays(x, y, xPos, yPos + 1);
	}
	if(xPos == x && yPos == y){
		cout << "(" << xPos << ", " << yPos << ")" << endl;
		cout << endl;
		cnt += 1;
	}
	return;
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int x = 10;
	int y = 10;
	cntWays(x - 1, y - 1);
	cout << cnt << endl;
	return 0;
}

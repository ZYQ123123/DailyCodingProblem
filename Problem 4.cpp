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

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int r = 0, g = 0, b = 0;
	string str = "RGBRGBRGB";
	int n = str.length();
	for(int i = 0; i < n; i++){
		if(string(1, str[i]) == "R"){
			r += 1;
		}else if(string(1, str[i]) == "G"){
			g += 1;
		}else if(string(1, str[i]) == "B"){
			b += 1;
		}
	}
	cout << r << " " << g << " " << b << endl;
	if((r % 2) == (b % 2) && (r % 2) == (g % 2) && (b % 2) == (g % 2)){
		cout << str[0] << str[0] << endl;
	}else{
		if((r + b) % 2 == 0){
			cout << "G" << endl;
		}else if((r + g) % 2 == 0){
			cout << "B" << endl;
		}else if((g + b) % 2 == 0){
			cout << "R" << endl;
		}
	}
	return 0;
}

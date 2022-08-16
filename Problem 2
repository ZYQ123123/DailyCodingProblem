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

string ret = "";

string revStr(string str){
	string rev = "";
	int n = str.length();
	for (int i = n - 1; i >= 0; i--){
		rev += (str[i]);
	}
	return rev;
}

string toBin(int n){
	if(n > 1){
		ret.append(to_string(n % 2));
		toBin(n / 2);
	}else{
		ret.append(to_string(1));
	}
	return ret;
}

bool isSparse(string str){
	int n = str.length();
	for(int i = 0; i < n - 1; i++){
		if(str[i] == str[i + 1]){
			return false;
		}
	}
	return true;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int n = 17;
	string b = toBin(n);
	while(!isSparse(b)){
		cout << "NOT " << n << " " << revStr(b) << endl;
		n += 1;
		ret = "";
		b = toBin(n);
	}
	cout << "SPARSE " << n << " " << revStr(b);
	return 0;
}




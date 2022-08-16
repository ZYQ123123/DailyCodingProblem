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

int ans = 10;

bool func1(int num){
	int cnt = 1;
	while((cnt*cnt) <= num){
		if ((num - (cnt*cnt)) == 0){
			return true;
		}else{
			cnt++;
		}
	}
	return false;
}

int func2(int n, int c = 0){
	if(c >= ans){
		return 0;
	}
	int t = n;
	while(t > 0){
		if(func1(t)){
			func2(n - t, c + 1);
		}
		t--;
	}
	if(n - t == 0){
		if(ans == 0 || ans > c){
			ans = c;
		}
	}
	return c;
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	func2(20);
	cout << "ANS: " << ans << endl;
	return 0;
}



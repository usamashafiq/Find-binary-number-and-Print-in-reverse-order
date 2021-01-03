#include<iostream>
#include<conio.h>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

 void main(){
	int hos[10],x,y,i=0;
	int tut[200];
	
	
	cout << "Enter a decimal number : ";
		cin >> x;
		while (x > 0) {
			
			y = x % 2;
			x /= 2;
			hos[i] = y;
			i++;

		}
		for (int j = i-1; j > -1; j--) {
			cout << hos[j]<<" ";
		}
	_getch();
}

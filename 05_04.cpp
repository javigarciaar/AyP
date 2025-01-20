#include <iostream>
using namespace std;

int max2(int a, int b){
	return a > b ? a : b;
}

int min2(int a, int b){
	return a < b ? a : b;
}

void max5_y_min5(int a, int b, int c, int d,int e, int &max,int &min){
	max = max2(max2(max2(a,b), c), max2(d, e));
	min = min2(max2(max2(a,b), c), max2(d, e));
}
int main(){
	
}

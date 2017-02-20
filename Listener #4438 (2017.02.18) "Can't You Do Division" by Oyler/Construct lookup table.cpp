#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n=100;
	int count=0;

	for(int i=1; i<=n; i++){
		count=0;
		for(int j=1; j<sqrt(i); j++){
			if(i%j==0){count+=2;}
		}
		if(floor(sqrt(i))*floor(sqrt(i))==i){count++;}
		cout << count << ", ";
	}
}

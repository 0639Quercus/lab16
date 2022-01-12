#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *x, int *y, int *z, int *w){
	const int N = 4;
	int *box[] = {x,y,z,w};

	int temp, ptr;
	for(int i = N-1; i > 1; i--){
		ptr = rand()%(i+1);
		temp = *box[i];
		*box[i] = *box[ptr];
		*box[ptr] = temp;
	}
}

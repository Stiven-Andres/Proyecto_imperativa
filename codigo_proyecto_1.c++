#include <iostream>
#include <time.h>
using namespace std;
#define f 12
#define n 16
void llenar(int[f][n]);
void mostrar(int[f][n]);
void mostrar_diagonal(int[f][n]);
int main(int argc, char *argv[]) {
	int m[f][n];
	srand(time(NULL));
	llenar(m);
	mostrar(m);
	return 0;
}	
void llenar(int m[f][n]){
	for(int fil=0; fil<f; fil++){
		for(int col=0; col<n; col++){
			m[fil][col]=rand()%10;
		}
	}
}
	void mostrar(int m[f][n]){
		for(int fil=0; fil<f; fil++){
			for(int col=0; col<n; col++){
				cout<<m[fil][col]<<"\t";
			}
			cout<<endl;
		}
	}

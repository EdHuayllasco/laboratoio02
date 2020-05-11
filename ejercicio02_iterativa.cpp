#include <iostream>
using namespace std;
void invertir(int array[], int tam){
	int aux;
	for (int i=0;i<tam/2;i++){
		aux=array[i];
		array[i]=array[(tam-1)-i];
		array[(tam-1)-i]=aux;
	}
}

int main(){
	int array[]={1,2,3,4,5};
	int tam=sizeof(array)/sizeof(array[0]);
	invertir(array,tam);
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
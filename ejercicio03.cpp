#include <iostream>
using namespace std;
void arreglo(int array[], int tam){
	int aux,menor;
	for(int i=0;i<tam;i++){
		menor=i;
		for(int j=i+1;j<tam;j++){
			if(array[menor]>array[j]){
				menor=j;
			}
		}
		aux=array[i];
		array[i]=array[menor];
		array[menor]=aux;
	}
}
void mostrar(int array[], int tam){
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	} 
}
int main(){
	int array[]={8,5,6,3,4,9};
	int tam=sizeof(array)/sizeof(array[0]);
	arreglo(array,tam);
	mostrar(array,tam);
	
	return 0;
}
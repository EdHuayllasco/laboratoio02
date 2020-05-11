#include <iostream>
using namespace std;
void invertir(int array[],int ini,int fin){
	int aux;
	if(ini<fin){
	aux=array[ini];
	array[ini]=array[fin];
	array[fin]=aux;
	invertir(array,ini+1,fin-1);
	}
}

int main(){
	int array[]={1,2,3,4,5};
	invertir(array,0,4);
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
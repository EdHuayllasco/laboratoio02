#include <iostream>
using namespace std;
int sumarR(const int array[],int tam){
	if(tam==1){
		return array[0];
	}
	return array[tam-1]+sumarR(array,--tam);
	
}
int main(){
	int array[]={1,2,3,4,5,6,7};
	int tam=sizeof(array)/sizeof(array[0]);
	cout<<"suma de elementos: "<<sumarR(array,tam);
	return 0;
}
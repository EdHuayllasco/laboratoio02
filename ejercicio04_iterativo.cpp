#include <iostream>
using namespace std;
//ITERATIVA
int cadena(char x[],int cont){
	if(x[cont]=='\0'){
		return cont;
	}
	return cadena(x,++cont);
}
int main(){
	char caden[100];
	int cont=0;
	cout<<"ingrese una cadena: ";
	cin.getline(caden,100,'\n');
	cout<<"el largo de tu cadena es: "<<cadena(caden,cont);
	return 0;
}
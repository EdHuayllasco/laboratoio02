#include <iostream>
using namespace std;
int cadena(char x[]){
	int cont=0;
	while(x[cont]!='\0'){
		cont=cont+1;
	}
	return cont;
}

int main(){
	char caden[100];
	cout<<"ingrese una cadena: ";
	cin.getline(caden,100,'\n');
	cout<<"el largo de su cadena es: "<<cadena(caden);
	return 0;
}
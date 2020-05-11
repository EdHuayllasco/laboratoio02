#include <iostream>
using namespace std;
void concatenar(char x[], int a, char z[], int j);
int cadena(char x[]);
char b[50], x[100];
int a,c;
int main(){
	cout<<"ingrese otra cadena: ";
	cin.getline(b,50,'\n');
	c=cadena(b);

	cout<<"ingrese una cadena: ";
	cin.getline(x,100,'\n');
	a=cadena(x);

	concatenar(x,a,b,c);
	cout<<"las cadenas concatenadas es: "<<x;
	return 0;
}
int cadena(char x[]){
	int cont=0;
	while(x[cont]!='\0'){
		cont=cont+1;
	}
	return cont;
}
void concatenar(char x[], int a, char z[], int j){
	int c=0;
	for (int i=a; i<a+j;i++){
		x[i]=z[c];
		c=c+1;
	}
}
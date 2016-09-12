#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char Nombre[20];
	int tope;
	cout<<"Hola mundo"<<endl;
	cout<<"Ingresa tu nombre "<<endl;
	cin>>Nombre;
	cout<<"Bienvenido "<<Nombre<<endl;
	cout<<"Ingresa el limite del contador ";
	cin>>tope;
	for(int i=0;i<tope;i++)
	{
		cout<<"Cuenta: "<<i<<endl;
	}
	cout<<"Finalizacion del programa"<<endl;
	system("pause");
	return 0;
}

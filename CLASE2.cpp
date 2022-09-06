#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()  {
	 
	 float diametro;
	 cout<<"INTRODUCIR EL DIAMETRO"<<endl;
	 cin>>diametro;
	 cout<<"EL DIAMETRO ES "<<diametro<<endl;
	 float radio;
	 radio=diametro/2;
	 cout<<"EL RADIO ES "<<radio<<endl;
	 float pi;
	 pi=3.1416;
	 float area;
	 area=pi*(radio)*(radio)*4;
	 cout<<"EL AREA ES "<<area<<endl;
	 float volumen;
	 volumen=(4/3)*pi*(radio*radio*radio);
	 cout<<"EL VOLUMEN ES "<<volumen<<endl;
	 float circunferencia;
	 circunferencia=2*pi*radio;
	 cout<<"LA CIRCUNFERENCIA ES "<<circunferencia<<endl;
	 if(area>30){
	 	cout<<"EL AREA RESULTO SER GRANDE"<<endl;
	 }
	 else{
	 	cout<<"EL AREA RESULTO SER PEQUEÑA"<<endl;
	 }
	return 0;
}

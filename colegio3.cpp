/*  
Taller: Implementación de las sentencias if - else.
Realice una aplicación en C++ que le pregunte al usuario la edad de su hijo.
 Si el niño tiene entre 0 y 6 años el programa debe imprimir que el niño pertenece al grupo de la primera infancia.
Si la edad está entre los 6 y los 12 años el programa debe imprimir que el niño pertenece al grupo de la segunda infancia;
y en caso de que el niño tenga entre 12 y 18 años el mensaje impreso dirá que pertenece al grupo de los adolescentes.
 Siga las instrucciones de la guía de aprendizaje 3


  */


#include <iostream>
#include <conio.h>
// se incluye la librería iostream que maneja los flujos de entrada/salida
using namespace std;
//se usa el espacio de nombre std para evitar confusiones en los nombres
int main() //la función principal
{
 float n1,n2,n3,n4,prom,n; //se declaran las variables
 char nombre[23];
 char apellido[23];
 char comentario [40];
 int variable,cont,i;
// Se le dan los valores a las variables de acuerdo a su proposito 
cont=0;
do
{

cout << "Colegio Notas\n 1- Ingresar notas \n 0- salir"<<endl;
cin >> variable ;


switch(variable)   // Menu de la plataforma
{
case 1:
{
 // Ingresa notas
 cout << "Ingrese el  numero de notas del estudiante\n"<<endl;  
 
 cin >> n; 
 for(i=1;i<=n;i++)
 {
 	cout <<"Ingrese nota "<<i<<endl;
 	cin >> n1;
 	if (n1>0 && n1<=5)
{
	 cout << "Nota ingresada\n"<<endl; 
}
else
{
 cout << "Nota invalida\n"<<endl;
 cout << "La nota debe ser positiva y menor a 5 intentelo de nuevo:\n"<<endl;
  cin >> n1; 	
}
 	cont++;
 	n2+=n1;
 }
 cout<<n<<endl;
 prom=n2/n;
 cout<<n2<<endl;
 cout<<prom<<endl;
 
 cout << "Promedio: "<<prom<<endl;

if (prom<5 && prom>0)
{
if (prom>=3 && prom<=3.5)
 {
 	cout << " En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar.\n"<<prom<<endl; 
}
 else 
 {
 	cout << "No aprobado"  <<endl;
 
 }
if (prom >3.5 && prom<=5)
 {
 		cout << "Aprobado"  <<endl;
 	
 }
if (prom>5)
{
 cout << "Promedio no puede ser mayor que 5\n"<<prom<<endl; 	
}
cout << " Promedio del estudiante es:\n"<<prom<<endl; 
cout << " Ingrese nombre y apellido.\n"<<endl;
cin >> nombre;
cin >> apellido;

cout << " Ingrese comentarios.\n"<<endl;
cout << " Comentarios hechos por .\n"<<nombre<<" "<<apellido<<endl;
cin >> comentario;
cin.getline(comentario,40);
 //  Funcion que permite escribir con  espacio
cout << " ------------------------\n"<<nombre<<"\n"<<comentario<<"\n"<<comentario<<endl;
cout << " \n Gracias por usar la plataforma\n"<<endl;
}
n1=0;
break;
}

// Sale de la plataforma
case 0:
cout<<"Gracias por usar la plataforma";
 break;
}

}
while(variable!=0);
 return 0;
}

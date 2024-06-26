#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main() {

    int opcion;
	 int tipoCliente[3];
	 int cedula[3];
	 int tipoTiquete[3];
	 int cantidadTiquetes[3];
     int i=0;
    float montoUnitario[3], montoVenta[3], descuento[3], subtotal[3], impuesto[3] ,totalPagar[3];
    char   nombre[3];
    
     system ("color f5");
    system ("cls");
   
    do {
       
        // Solicitar datos
        cout <<"Ingrese cedula del cliente:"<< endl;
        cin >>cedula[i];
        cout <<"Ingrese nombre del cliente: " << endl;
        cin >> nombre[i];
        cout <<"Tipo de cliente 1= Nino o adulto mayor, 2=Adulto:"<< endl;
        cin >>tipoCliente[i];
        cout <<"Tipo de tiquete (1=Galeria, 2=Palco):"<< endl;
        cin >>tipoTiquete[i];
        cout <<"Cantidad de tiquetes a comprar:" <<endl;
        cin >>cantidadTiquetes[i];
      cout <<"--------------------------------" <<endl;
       
         
        // Calcular montos
        if (tipoTiquete[i] == 1) {
            montoUnitario[i] = 6000;
        } else if (tipoTiquete[i] == 2) {
            montoUnitario[i] = 12000;
            
      }else {
		  cout <<"Tipo de tiquete no valido"<< endl;
            continue; // Volver al inicio del ciclo
        } 
          
        montoVenta[i] = cantidadTiquetes[i] * montoUnitario[i];
        if (tipoCliente[i] == 1) {
            descuento[i] = montoVenta[i] * 0.3;
        } else {
            descuento[i] = 0;
        }
        subtotal[i] = montoVenta[i] - descuento[i];
        impuesto[i] = subtotal[i] * 0.13;
        totalPagar[i] = subtotal[i] + impuesto[i];
        
        i++;
       } while (i<3);
       
        // Mostrar datos de la venta
        cout <<"***Datos Cliente***"<< endl;
        cout << "--------------------------------"<< endl;
        for (int indice =0;(indice<3);indice++)
		{
        cout <<"Cedula: " <<cedula[indice] <<endl;
        cout <<"Nombre: "  << nombre[indice]<< endl;
        cout <<"Tipo de cliente: " <<tipoCliente[indice]<< endl;
        cout <<"Tipo de tiquete:" <<tipoTiquete[i] << endl;
        cout <<"Cantidad de tiquetes:" <<cantidadTiquetes[indice]<< endl;
        cout <<"Monto unitario por tiquete: " <<montoUnitario[indice]<< endl;
        cout <<"Monto de venta: " <<montoVenta[indice]<< endl;
        cout <<"Descuento:" <<descuento[indice]<< endl;
        cout <<"Subtotal de venta:" << subtotal[indice]<<endl;
        cout <<"Impuesto de venta:" <<impuesto[indice]<< endl;
        cout <<"Total a pagar:"  <<totalPagar[indice]<< endl;
        cout <<"--------------------------------" <<endl;
         }
        
     system ("pause");
        
    
    
   
	return 0;
}

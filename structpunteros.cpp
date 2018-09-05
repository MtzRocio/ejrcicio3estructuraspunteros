#include <iostream>
#include <conio.h>

using namespace std;

struct producto{
    char nombre[10];
    float precio;
    struct producto *ptr;
} producto1, producto2, *inicio;

int main (int argc, char** argv){
    inicio=&producto1;
    inicio->ptr=&producto2;
    cout<<"Precio de producto 1 ";
    cin>>inicio->precio;
    cout<<"Nombre del producto 1 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    cout<<"Precio del producto 2 ";
    cin>>inicio->ptr->precio;
    cout<<"Nombre del producto 2 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    int totalProductos=10;

    struct producto producto3;
    inicio->ptr->ptr=&producto3;

    struct producto producto4;
    inicio->ptr->ptr->ptr=&producto4;

    //rellenamos a animal 3
    cout<<"Precio del producto 3 ";
    cin>>inicio->ptr->ptr->precio;
    cout<<"Nombre del producto 3 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    cout<<"direccion de inicio "<<&inicio<<endl;
    cout<<"direccion producto 1"<<&producto1<<endl;
    cout<<"direccion producto 2"<<&producto2<<endl;
    cout<<"precio que se guardo 1"<<inicio->precio<<endl;
    cout<<"nombre que se guardo 1"<<inicio->nombre<<endl;
    cout<<"precio que se guardo 2"<<(inicio+1)->precio<<endl;
    cout<<"nombre que se guardo 2"<<(inicio+1)->nombre<<endl;
    cout<<"nombre 3"<<inicio->ptr->ptr->nombre<<endl;
    cout<<"precio 3"<<inicio->ptr->ptr->precio<<endl;
    cout<<"nombre 4"<<inicio->ptr->ptr->ptr->nombre<<endl;
    cout<<"precio 4"<<inicio->ptr->ptr->ptr->precio<<endl;

getch();
return 0;
}

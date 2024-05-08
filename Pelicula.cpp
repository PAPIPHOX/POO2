//Johan Cabrera Pena A01635713
// Juan Diego Salcedo García A01368540
#include "Pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula(){
    titulo = "batman";
    duracion = 1.20;
}

Pelicula::Pelicula(int _tipo, int _id, double _cali, string _genero, string _titulo, double _duracion):Video(_tipo,_id,_cali, _genero){
    titulo = _titulo;
    duracion = _duracion;
}
Pelicula::~Pelicula(){}
string Pelicula::getTitulo(){
    return titulo;
}
void Pelicula::setTitulo(string _titulo){
    titulo = _titulo;
}
double Pelicula::getDuracion(){
    return duracion;
}
void Pelicula::imprime(){
    Video::imprime();
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Duracion: "<<duracion<<" horas" <<endl;
    cout<<"------------------------"<<endl;
}
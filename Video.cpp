//Johan Cabrera Pena A01635713
// Juan Diego Salcedo García A01368540
#include "Video.h"
#include <iostream>


Video::Video(){
    genero = "-------";
    calificacion = 0;
}
Video::Video(int _tipo, int _id, double _cali, std::string _genero){
    calificacion = _cali;
    genero = _genero;
    id = _id;
    tipo = _tipo;
}
Video::~Video(){}
double Video::getCali(){
    return calificacion;
}
std::string Video::getGenero(){
    return genero;
}
int Video::getTipo(){
    return tipo;
}
int Video::getID(){
    return id;
}
void Video::setCali(double _cali){
    calificacion = _cali;
}
void Video::setGenero(std::string _genero){
    genero = _genero;
}
void Video::imprime(){
    std::cout<<"------------------------"<<std::endl;
    std::cout<<"ID: "<<id<<std::endl;
    std::cout<<"Calificacion: "<<calificacion<<std::endl;
    std::cout<<"Genero: "<<genero<<std::endl;
}
std::ostream &operator << (std::ostream& salida, Video* video){
    salida << video->getGenero() << std::endl;
    return salida;
}
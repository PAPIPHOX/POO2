//Johan Cabrera Pena A01635713
// Juan Diego Salcedo García A01368540
#include "Serie.h"

Serie::Serie(){}

Serie::Serie(int _tipo, int _id, double _cali, std::string _genero, std::string _nombre, std::vector<std::string> _episodios ):Video(_tipo,_id,_cali, _genero){
    nombre = _nombre;
    episodios = _episodios;
}
Serie::~Serie(){}
std::string Serie::getNombre(){
    return nombre;
}
void Serie::setNombre(std::string _nombre){
    nombre = _nombre;
}
void Serie::imprime(){
    Video::imprime();
    std::cout<<"Nombre de la serie: "<<nombre<<std::endl;
    std::cout<<"_________Episodios_________"<<std::endl;
    for (int i=0; i<episodios.size(); i++){
        std::cout<<"N."<<i+1<<" - "<<episodios[i]<<std::endl;
    }
}
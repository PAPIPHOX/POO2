#include "Video.h"
#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>

class Pelicula:public Video{
    public:
        Pelicula();
        Pelicula(int, int, double, std::string, std::string, double);
        ~Pelicula();
        std::string getTitulo();
        double getDuracion();
        void setTitulo(std::string);
        void imprime() override;
    private:
        std::string titulo;
        double duracion;
};

#endif
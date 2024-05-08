#include "Video.h"
#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include<vector>

class Serie:public Video{
    public:
        Serie();
        Serie(int, int, double, std::string, std::string, std::vector<std::string>);
        ~Serie();
        std::string getNombre();
        void setNombre(std::string);
        void imprime() override;
    private:
        std::string nombre;
        std::vector<std::string>episodios;
};

#endif
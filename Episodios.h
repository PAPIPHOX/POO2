#ifndef EPISODIOS_H
#define EPISODIOS_H
#include <vector>
#include <iostream>

class Episodios{
    public:
        Episodios();
        Episodios(std::string);
        ~Episodios();
        std::string getNombreEp();
        void imprime();
    private:
        std::string nombreEp;
};


#endif
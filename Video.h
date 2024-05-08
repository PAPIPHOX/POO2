#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>

class Video{
    public:
        Video();
        Video(int, int, double, std::string);
        ~Video();
        double getCali();
        std::string getGenero();
        int getTipo();
        int getID();
        void setCali(double);
        void setGenero(std::string);
        //virtual double calculaCali() = 0;
        virtual void imprime();
        friend std::ostream& operator << (std::ostream &, Video*);
    private:
        double calificacion;
        std::string genero;
        int id;
        int tipo;
};


#endif
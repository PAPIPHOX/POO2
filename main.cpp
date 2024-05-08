//Johan Cabrera Pena A01635713
// Juan Diego Salcedo García A01368540
#include "Pelicula.h"
#include "Serie.h"
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    vector<Video*> videos;
    int id, numep, tipos;
    int f, b, c;
    double cali, duracion, newcali;
    string genero, nombre, nombreEp;
    char tipo;
    ifstream archivo;
    archivo.open("Video.txt");
    if(archivo.is_open()){
        while(archivo >> tipo){
            if(tipo == 'p'){
                archivo >> tipos >> id >> cali >> genero >> nombre >> duracion;
                videos.push_back(new Pelicula(tipos, id, cali, genero, nombre, duracion));
            }else{
                vector<string> episodio;
                archivo >> tipos >> id >> cali >> genero >> nombre >> numep;
                for (int i=0; i<numep; i++){
                    archivo >> nombreEp;
                    episodio.push_back(nombreEp);
                }
                videos.push_back(new Serie(tipos, id, cali, genero, nombre, episodio));
            }
        }
        archivo.close();
    }else{
        cout<<"El archivo no se pudo abrir"<<endl;
    }
    do
    {
        cout<<"----------------------------------"<<endl;
        cout<<"Elige la opcion que sea de tu preferencia"<<endl;
        cout<<"Opcion 1. Mostrar videos con cierta calificacion."<<endl;
        cout<<"Opcion 2. Mostrar series con cierta calificaion."<<endl;
        cout<<"Opcion 3. Mostrar peliculas con cierta calificacion."<<endl;
        cout<<"Opcion 4. calificar un video."<<endl;
        cout<<"Opcion 5. Mostrar generos con cierta calificaion."<<endl;
        cout<<"Opcion 0. Terminar el programa."<<endl;
        cout<<"teclea la opcion que quieras: ";
        cin>>f;
        if (f == 1){
            do
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"1. Mostrar videos con calificacion de 0-2"<<endl;
                cout<<"2. Mostrar videos con calificacion de 2-4"<<endl;
                cout<<"3. Mostrar videos con calificacion de 4-6"<<endl;
                cout<<"4. Mostrar videos con calificacion de 6-8"<<endl;
                cout<<"5. Mostrar videos con calificacion de 8-10"<<endl;
                cout<<"6. Para salir de este menu"<<endl;
                cout<<"Escribe la opcion que quieras: ";
                cin>>b;
                
                if(b == 1){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=0 && videos[i]->getCali()<2){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 2){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=2 && videos[i]->getCali()<4){
                            videos[i]->imprime();
                        }
                    }   
                }
                else if(b == 3){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=4 && videos[i]->getCali()<6){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 4){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=6 && videos[i]->getCali()<8){
                            videos[i]->imprime();
                        }
                    }
                }
                else if (b == 5){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=8 && videos[i]->getCali()<=10){
                            videos[i]->imprime();
                        }
                    }
                }
            }
            while(b != 6);
        }
        else if(f == 2){
            do
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"1. Mostrar series con calificacion de 0-2"<<endl;
                cout<<"2. Mostrar series con calificacion de 2-4"<<endl;
                cout<<"3. Mostrar series con calificacion de 4-6"<<endl;
                cout<<"4. Mostrar series con calificacion de 6-8"<<endl;
                cout<<"5. Mostrar series con calificacion de 8-10"<<endl;
                cout<<"6. Para salir de este menu"<<endl;
                cout<<"Escribe la opcion que quieras: ";
                cin>>b;
                if(b == 1){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=0 && videos[i]->getCali()<2 && videos[i]->getTipo() == 0){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 2){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=2 && videos[i]->getCali()<4 && videos[i]->getTipo() == 0){
                            videos[i]->imprime();
                        }
                    }   
                }
                else if(b == 3){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=4 && videos[i]->getCali()<6 && videos[i]->getTipo() == 0){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 4){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=6 && videos[i]->getCali()<8 && videos[i]->getTipo() == 0){
                            videos[i]->imprime();
                        }
                    }
                }
                else if (b == 5){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=8 && videos[i]->getCali()<=10 && videos[i]->getTipo() == 0){
                            videos[i]->imprime();
                        }
                    }
                }
            }
            while(b != 6);
        }
        else if(f == 3){
            do
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"1. Mostrar series con calificacion de 0-2"<<endl;
                cout<<"2. Mostrar series con calificacion de 2-4"<<endl;
                cout<<"3. Mostrar series con calificacion de 4-6"<<endl;
                cout<<"4. Mostrar series con calificacion de 6-8"<<endl;
                cout<<"5. Mostrar series con calificacion de 8-10"<<endl;
                cout<<"6. Para salir de este menu"<<endl;
                cout<<"Escribe la opcion que quieras: ";
                cin>>b;
                if(b == 1){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=0 && videos[i]->getCali()<2 && videos[i]->getTipo() == 1){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 2){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=2 && videos[i]->getCali()<4 && videos[i]->getTipo() == 1){
                            videos[i]->imprime();
                        }
                    }   
                }
                else if(b == 3){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=4 && videos[i]->getCali()<6 && videos[i]->getTipo() == 1){
                            videos[i]->imprime();
                        }
                    }
                }
                else if(b == 4){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=6 && videos[i]->getCali()<8 && videos[i]->getTipo() == 1){
                            videos[i]->imprime();
                        }
                    }
                }
                else if (b == 5){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=8 && videos[i]->getCali()<=10 && videos[i]->getTipo() == 1){
                            videos[i]->imprime();
                        }
                    }
                }
            }
            while(b != 6);
        }
        else if (f == 4){
            cout<<"_____________________________________"<<endl;
            cout<<"Escribe el id del titulo que quieres calificar: ";
            cin>>c;
            cout<<"Califica este titulo: ";
            cin>>newcali;
            int index = 0;
            for (int i=0; i<videos.size(); i++) {
                if (c == videos[i]->getID()) {
                    videos[i]->setCali(newcali);
                    index = i;
                    cout<<"La calificacion se ha cambiado a: "<<videos[i]->getCali()<<endl;
                    break;
                } 
            }
            if (index == 0) {
                cout<<"No existe ID"<<endl;
            }
            
        }
        //aqui se hace la sobrecarga de operadores.
        else if(f == 5){
            do
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"1. Mostrar genero de videos con calificacion de 0-2"<<endl;
                cout<<"2. Mostrar genero de videos con calificacion de 2-4"<<endl;
                cout<<"3. Mostrar genero de videos con calificacion de 4-6"<<endl;
                cout<<"4. Mostrar genero de videos con calificacion de 6-8"<<endl;
                cout<<"5. Mostrar genero de videos con calificacion de 8-10"<<endl;
                cout<<"6. Para salir de este menu"<<endl;
                cout<<"Escribe la opcion que quieras: ";
                cin>>b;
                
                if(b == 1){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=0 && videos[i]->getCali()<2){
                            cout<<videos[i]<<endl;
                        }
                    }
                }
                else if(b == 2){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=2 && videos[i]->getCali()<4){
                            cout<<videos[i]<<endl;
                        }
                    }   
                }
                else if(b == 3){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=4 && videos[i]->getCali()<6){
                            cout<<videos[i]<<endl;
                        }
                    }
                }
                else if(b == 4){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=6 && videos[i]->getCali()<8){
                            cout<<videos[i]<<endl;
                        }
                    }
                }
                else if (b == 5){
                    for(int i=0; i<videos.size(); i++){
                        if (videos[i]->getCali()>=8 && videos[i]->getCali()<=10){
                            cout<<videos[i]<<endl;
                        }
                    }
                }
            }
            while(b != 6);
        }
        
    }
    while(f != 0);
    cout<<"---------------------------------------------------"<<endl;
    cout<<"          El programa ha terminado"<<endl;
}
#include "laboratory.h"
#include <fstream>

using namespace std;

Laboratory::Laboratory()
{
    cont = 0;
}

void Laboratory::addComputer(const Computer &c){

    if (cont < 5){

        arreglo [cont] = c;
        cont++;
    }
    else {
        cout<<"Arreglo lleno"<<endl;
    }

}

void Laboratory::mostrar(){
    cout << left;
    cout << setw(17) << "NOMBRE EQUIPO";
    cout << setw(13) << "SISTEMA";
    cout << setw(10) << "CPU";
    cout << setw(5) << "RAM";
    cout << endl;

    for(int i = 0; i<cont; i++){
        Computer &p = arreglo[i];
        cout << p;
    }
}

void Laboratory::respaldarTabla(){
    ofstream archivo ("computadorasTabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(17) << "NOMBRE EQUIPO";
        archivo << setw(13) << "SISTEMA";
        archivo << setw(10) << "CPU";
        archivo << setw(5) << "RAM";
        archivo << endl;
        for(int i = 0; i<cont; i++){
            Computer &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratory::respaldar(){
    ofstream archivo ("computadoras.txt");
    if(archivo.is_open()){

        for(int i = 0; i<cont; i++){
            Computer &p = arreglo[i];
            archivo << p.getName() << endl;
            archivo << p.getSystem() << endl;
            archivo << p.getCpu() << endl;
            archivo << p.getRam() << endl;

        }
    }
    archivo.close();
}
void Laboratory::recuperar()
{
    ifstream archivo ("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        Computer c;

        while(true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setName(temp);

            getline(archivo, temp);
            c.setSystem(temp);

            getline(archivo, temp);
            c.setCpu(temp);

            getline(archivo, temp);
            c.setRam(stoi(temp));

            addComputer(c);
        }
        archivo.close();
    }

}


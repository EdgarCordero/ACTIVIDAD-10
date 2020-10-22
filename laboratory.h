#ifndef LABORATORY_H
#define LABORATORY_H

#include "computer.h"


class Laboratory
{
    private:
        Computer arreglo[5];
        int cont;

    public:
        Laboratory();

        void addComputer (const Computer &c);
        void mostrar();

        void respaldarTabla();
        void respaldar();
        void recuperar();

        friend Laboratory& operator<<(Laboratory &lb, const Computer &c){

            lb.addComputer(c);

            return lb;
        }

};

#endif // LABORATORY_H

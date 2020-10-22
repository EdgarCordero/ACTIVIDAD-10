#include "computer.h"

using namespace std;

Computer::Computer()
{
    //ctor
}

Computer::Computer(const std::string &name,
                   const std::string &system,
                   const std::string &cpu,
                   const int &ram
                   )
{
    this->name = name;
    this->system = system;
    this->cpu = cpu;
    this->ram = ram;
}

std::string Computer::getName(){
    return name;
}

std::string Computer::getSystem(){
    return system;
}

std::string Computer::getCpu(){
    return cpu;
}

int Computer::getRam(){
    return ram;
}

void Computer::setName(const std::string &n){
    name = n;
}

void Computer::setSystem(const std::string &s){
    system = s;
}

void Computer::setCpu(const std::string &c){
    cpu = c;
}

void Computer::setRam (const int &r){
    ram = r;
}

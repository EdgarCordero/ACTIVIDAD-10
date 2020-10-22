#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include <iomanip>

class Computer
{
    private:

        std::string name;
        std::string system;
        std::string cpu;
        int ram;


    public:
        Computer();
        Computer(const std::string &name,
                 const std::string &system,
                 const std::string &cpu,
                 const int &ram
                 );

        void setName (const std::string &n);
        void setSystem (const std::string &s);
        void setCpu (const std::string &c);
        void setRam (const int &r);

        std::string getName ();
        std::string getSystem();
        std::string getCpu();
        int getRam();

        friend std::ostream& operator << (std::ostream &out, Computer &c){

         out << std::left;
         out << std::setw(17) << c.name;
         out << std::setw(13) << c.system;
         out << std::setw(10) << c.cpu;
         out << std::setw(5) << c.ram;
         out << std::endl;

         return out;

        }
        friend std::istream& operator >> (std::istream &in, Computer &c){
        std::cout << "NOMBRE EQUIPO: ";
        getline(std::cin, c.name);

        std::cout << "SISTEMA: ";
        getline (std::cin, c.system);

        std::cout << "CPU: ";
        getline (std::cin, c.cpu);

        std::cout << "RAM: ";
        std::cin >> c.ram;
        }

};

#endif // COMPUTER_H

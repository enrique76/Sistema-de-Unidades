#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

const string MF[7] = {"Longitud","Masa","Tiempo","Temperatura","Cantidad de Sustancia","Intensidad Luminosa","Corriente Electrica"};

int total = 6;

class SI {
    private:
        string simbolo;
        string nombre;
        int mf;
    public:
        SI(string simbolo, string nombre, int mf){
            this->simbolo = simbolo;
            this->nombre = nombre;
            this->mf = mf;
        }

        string getSimbolo(){
            return this->simbolo;
        }

        void setSimbolo(string simbolo){
            this->simbolo = simbolo;
        }

        string getNombre(){
            return this->nombre;
        }

        void setNombre(string nombre){
            this->nombre = nombre;
        }

        int getMagnitudFundamental(){
            return this->mf;
        }

        string getNombreMagnitud(){
            return MF[this->mf];
        }
};

// Sistema internacional Unidades Fundamentales  
SI *metro = new SI("m","metro",0);
SI *gramo = new SI("g","gramo",1);
SI *segundo = new SI("s","segundo",2);
SI *kelvin = new SI("K","Kelvin",3);
SI *mol = new SI("mol","mol",4);
SI *candel = new SI("cd","candel",5);
SI *ampere = new SI("A","ampere",6);

// Funciones    

string getNombre(int i){
    if(i == 0){
        return metro->getNombre();
    }
    else if(i == 1){
        return gramo->getNombre();
    }
    else if(i == 2){
        return segundo->getNombre();
    }
    else if(i == 3){
        return kelvin->getNombre();
    }
    else if(i == 4){
        return mol->getNombre();
    }
    else if(i == 5){
        return candel->getNombre();
    }
    else if(i == 6){
        return ampere->getNombre();
    }
}

string getData(int i){
    if(i == 0){
        return (metro->getNombre()+" = "+metro->getSimbolo() + " = " + MF[metro->getMagnitudFundamental()]);
    }
    else if(i == 1){
        return (gramo->getNombre()+" = "+gramo->getSimbolo() + " = " + MF[gramo->getMagnitudFundamental()]);
    }
    else if(i == 2){
        return (segundo->getNombre()+" = "+segundo->getSimbolo() + " = " + MF[segundo->getMagnitudFundamental()]);
    }
    else if(i == 3){
        return (kelvin->getNombre()+" = "+kelvin->getSimbolo() + " = " + MF[kelvin->getMagnitudFundamental()]);
    }
    else if(i == 4){
        return (mol->getNombre()+" = "+mol->getSimbolo() + " = " + MF[mol->getMagnitudFundamental()]);
    }
    else if(i == 5){
        return (candel->getNombre()+" = "+candel->getSimbolo() + " = " + MF[candel->getMagnitudFundamental()]);
    }
    else if(i == 6){
        return (ampere->getNombre()+" = "+ampere->getSimbolo() + " = " + MF[ampere->getMagnitudFundamental()]);
    }
}

/*
 *  Dispatchable <-- Combustion <-- Diesel class header file
 */


#ifndef DIESEL_H
#define DIESEL_H


#include "../../../includes.h"
#include "../Dispatchable.h"
#include "Combustion.h"


struct structDiesel {
    //...
};


class Diesel : public Combustion {
    public:
        //  1. attributes
        structDiesel struct_diesel;
        
        std::vector<double> fuel_vec_L;
        
        
        //  2. methods
        Diesel(structDispatchable, structCombustion, structDiesel);
        
        void commitProductionkW(double, int);
        
        double requestProductionkW(double);
        double getFuelConsumptionL(double, double);
        
        ~Diesel(void);
};


#endif  /* DIESEL_H */

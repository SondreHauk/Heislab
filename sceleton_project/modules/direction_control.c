#include "elevio.h"
#include "direction_control.h"

MotorDirection update_current_direction(int STOP, MotorDirection current_direction, int current_floor, int next_order){
    while (STOP = 0){
        if (current_floor = next_order)
            return 0;
        if (current_floor < next_order)
            return 1;
        if (current_floor > next_order)
            return -1;
    }
    return 0;
};
#Denne funksjonen er ikke ferdig. Den skal oppdatere motor_direction og ikke bare returnere en verdi. Tror man må bruke peker!

MotorDirection get_current_direction(MotorDirection current_direction){
    return current_direction;
};
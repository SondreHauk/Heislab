#pragma once
#include "elevio.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int current_floor;
    MotorDirection current_direction;
    int next_order;
    int STOP;
    int door:
    int inside_lights[3];
    int outside_ligst[3];
    int inside_requests[3];
    int outside_requests[3];
    int outside_requests_updated;
    int inside_requests_updated;
    
} elevator_states;

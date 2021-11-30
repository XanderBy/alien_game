#include <allegro5/allegro_image.h>
#include "Constantes.cpp"
#include "Colision.cpp"

typedef struct SHOT
{
    int x, y, dx, dy;
    int frame;
    bool ship;
    bool used;
} SHOT;

#define SHOTS_N 128
SHOT shots[SHOTS_N];



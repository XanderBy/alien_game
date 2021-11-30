#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>



typedef struct FX
{
    int x, y;
    int frame;
    bool spark;
    bool used;
} FX;
#define FX_N 128
FX fx[FX_N];

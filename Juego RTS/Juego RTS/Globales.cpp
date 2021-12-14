#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>

static int Ancho_pantalla = 960;
static int Alto_pantalla = 720;
static double FPS = 1 / 60;

static ALLEGRO_TIMER* timer=NULL;
static ALLEGRO_EVENT_QUEUE* queue=NULL;
static ALLEGRO_DISPLAY* disp=NULL;

static bool Cerrar_juego = false;
static bool pintar = true;

static bool key[ALLEGRO_KEY_MAX];

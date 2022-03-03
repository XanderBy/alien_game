#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>
//#include "Personaje.cpp"


const double FPS = 1 / 60;

static ALLEGRO_TIMER* timer=NULL;
static ALLEGRO_EVENT_QUEUE* queue=NULL;
static ALLEGRO_DISPLAY* disp=NULL;

static bool Cerrar_juego = false;
static bool pintar = true;

//static int Numero_maximo_enemigos = 10;
//static Enemigo Enemigos[10]
//static Personaje jugador;

//Con esto controlo que "pulse" una vez por segundo
static time_t inicioPulsaciones;
static time_t finPulsaciones;

enum estados_juego {menu, opciones, partida};




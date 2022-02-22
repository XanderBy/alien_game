#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>
#include "./Modelo/Mapa.h"
#include "Modelo/Jugador.h"
#include "Modelo/Enemigo.h"
#include "Modelo/Partida.h"
#include "Modelo/Game.h"
//#include "Personaje.cpp"


const double FPS = 1 / 60;

static ALLEGRO_TIMER* timer=NULL;
static ALLEGRO_EVENT_QUEUE* queue=NULL;
static ALLEGRO_DISPLAY* disp=NULL;

static bool Cerrar_juego = false;
static bool pintar = true;

//static int Numero_maximo_enemigos = 10;
//static Enemigo Enemigos[10];
static Hoja_sprite hoja;
//static Personaje jugador;

//Con esto controlo que "pulse" una vez por segundo
static time_t inicioPulsaciones;
static time_t finPulsaciones;





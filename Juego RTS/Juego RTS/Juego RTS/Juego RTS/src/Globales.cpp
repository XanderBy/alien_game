#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>
#include "./Modelo/Mapa.h"
//#include "Personaje.cpp"

static int Ancho_pantalla = 960;
static int Alto_pantalla = 720;
static double FPS = 1 / 60;

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

static float velocidad = 0.1;

static int ancho_mapa_gb = 20;
static int alto_mapa_gb = 10;

static int max_naves_jugador_gb = 10;
static int max_naves_enemigos_gb = 10;

static Mapa mapa;

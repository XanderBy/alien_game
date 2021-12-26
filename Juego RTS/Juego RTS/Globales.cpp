#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_font.h>
#include "Enemigo.cpp"
#include "Personaje.cpp"

static int Ancho_pantalla = 960;
static int Alto_pantalla = 720;
static double FPS = 1 / 60;

static ALLEGRO_TIMER* timer=NULL;
static ALLEGRO_EVENT_QUEUE* queue=NULL;
static ALLEGRO_DISPLAY* disp=NULL;

static bool Cerrar_juego = false;
static bool pintar = true;

static bool key[ALLEGRO_KEY_MAX];

//static int Numero_maximo_enemigos = 10;
//static Enemigo Enemigos[10];
static Hoja_sprite hoja;
static Personaje jugador;

//Con esto controlo que "pulse" una vez por segundo
static time_t inicioPulsaciones;
static time_t finPulsaciones;
#include "Recuadro.h"
#include <allegro5/allegro_primitives.h>

Recuadro::Recuadro()
{
}

Recuadro::Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo, unsigned ocupado_con)
{
    this->x = x;
    this->y = y;
    this->ancho = ancho;
    this->alto = alto;
    this->sprt = sprt;
    this->tipo = tipo;
    this->ocupado_con = ocupado_con;

}

Recuadro::Recuadro(int x, int y, int ancho, int alto, Sprite sprt, Tipo_recuadro tipo)
{
    this->x = x;
    this->y = y;
    this->ancho = ancho;
    this->alto = alto;
    this->sprt = sprt;
    this->tipo = tipo;
}

Recuadro::Recuadro(int x, int y, int ancho, int alto, Tipo_recuadro tipo)
{
    this->x = x;
    this->y = y;
    this->ancho = ancho;
    this->alto = alto;
    this->tipo = tipo;
}

Tipo_recuadro Recuadro::get_tipo_recuadro()
{
    return tipo;
}

void Recuadro::dibujar()
{
    int x_inicio = x==0 ? 0: ((x * ancho) - ancho) ;
    int y_inicio = y==0 ? 0 : ((y * alto) - alto);
    al_draw_rectangle(x_inicio, y_inicio, x * ancho, x * alto, al_map_rgb(44, 117, 255),1.0);
        //al_draw_bitmap_region(sprt.hoja.hja, sprt.x, sprt.y, sprt.ancho, sprt.alto, x*ancho, y*alto, 0);

}

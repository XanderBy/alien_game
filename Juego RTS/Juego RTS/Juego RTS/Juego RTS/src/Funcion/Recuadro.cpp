#include "../Modelo/Recuadro.h"
#include <allegro5/allegro_primitives.h>
#include <iostream>


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
    int x_inicio = this->x==0 ? 0: ((this->x * ancho) - ancho);
    int y_inicio = this->y==0 ? 0 : ((this->y * alto) - alto);
    int x_fin = (this->x + 1) * ancho;
    int y_fin = (this->y + 1) * alto;
    //std::cout << "Inicio: " << x;
    al_draw_rectangle(x_inicio, y_inicio, x_fin, y_fin, al_map_rgb(44, 117, 255),1.0);
        //al_draw_bitmap_region(sprt.hoja.hja, sprt.x, sprt.y, sprt.ancho, sprt.alto, x*ancho, y*alto, 0);

}

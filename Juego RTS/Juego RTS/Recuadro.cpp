#include "Recuadro.h"

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

Tipo_recuadro Recuadro::get_tipo_recuadro()
{
    return tipo;
}

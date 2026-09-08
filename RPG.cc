#include <iostream>

struct personaje
{
    int vida;
};

void ConsultarVida(int vida);
void RecibirDano(int* vida, int dano);

int main ()
{
    personaje Personaje;

    Personaje.vida = 100;

    std::cout << "Vida inicial:" << std::endl;
    ConsultarVida(Personaje.vida);

    RecibirDano(&Personaje.vida, 30);

    std::cout << "Vida despues de recibir dano:" << std::endl;
    ConsultarVida(Personaje.vida);




    }

void ConsultarVida(int vida)
{
    std::cout << "Vida actual: " << vida << std::endl;
}

void RecibirDano(int* vida, int dano)
{
     *vida -= dano;
}
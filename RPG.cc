#include <iostream>

struct personaje
{
    int vida;
};

void ConsultarVida(int vida);
void Curar(int &vida, int puntos);
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




void RecibirDano(int* vida, int dano)
{
     *vida -= dano;
}


void ConsultarVida(int vida)
{
    std:: cout<<"Vida actual: "<< vida << "hp" << std::endl;
}

void Curar(int &vida, int puntos)
{
    if (vida<100){
    vida += puntos;
    std:: cout<<"La vida del personaje a sido aumentada"<< std::endl;
    }
    else{
        std::cout<<"Error, vida maxima alcanzada"<<std::endl;
    }

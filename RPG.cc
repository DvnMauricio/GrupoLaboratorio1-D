#include <iostream>

struct personaje
{
    int vida;
};

void ConsultarVida(int vida);
void RecibirDano(int* vida, int dano);
void Curar(int &vida, int puntos);
int main ()
{
    personaje Personaje;

    Personaje.vida = 60;

    std::cout << "Vida inicial:" << std::endl;
    ConsultarVida(Personaje.vida);
    Curar(Personaje.vida, 20);
    std::cout << "Vida despues de ser curado" << std::endl;
    ConsultarVida(Personaje.vida);
    RecibirDano(&Personaje.vida, 30);
    std::cout << "Vida despues de recibir dano:" << std::endl;
    ConsultarVida(Personaje.vida);

    return 0;
    }


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
        std::cout<<"Error, la vida maxima ha sido alcanzada"<<std::endl;
    }
}
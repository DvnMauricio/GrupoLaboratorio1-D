#include <iostream>

struct personaje
{
    int vida;
};

void ConsultarVida(int vida);
void Curar(int &vida, int puntos);
int main()
{
    personaje Personaje;

    Personaje.vida = 90;

    std::cout << "Vida inicial: " << std::endl;
    ConsultarVida(Personaje.vida);

    Curar(Personaje.vida, 10);

    std::cout << "Despues de curar: " << std::endl;
    ConsultarVida(Personaje.vida);

    return 0;
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
}